# /usr/bin/python3

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


data = pd.read_csv("relaxation-rates.dat", delimiter="\t")
# print(data)

data_T_scan = data[data["Energy(keV)"] > 19.9]
data_E_scan_LT = data[data["Temperature(K)"] < 3.6]
data_E_scan_HT = data[np.isclose(data["Temperature(K)"], 11.85, 0.05)]


print(data_T_scan["Energy(keV)"].mean())


fs = (9.6, 4.8)

fitcolor = "red"
fitcolor_local = "blue"

# T scan
fig1, (ax1, ax2, ax3) = plt.subplots(
    1, 3, sharex=False, sharey=True, figsize=fs, constrained_layout=True
)


ax1.errorbar(
    data_T_scan["Temperature(K)"],
    data_T_scan["Rate(1/s)"],
    xerr=data_T_scan["TemperatureError(K)"],
    yerr=data_T_scan["RateError(1/s)"],
    fmt="o",
    zorder=1,
    color="black",
    label="data [$E = %.2f$ keV]" % data_T_scan["Energy(keV)"].mean(),
)


fit_T_scan = pd.read_csv("fit_T_scan.csv")
ax1.plot(
    fit_T_scan["Temperature (K)"],
    fit_T_scan["Rate (1/s)"],
    "-",
    zorder=0,
    label="global fit (nonlocal)",
    color=fitcolor,
)

fit_T_scan_local = pd.read_csv("fit_T_scan_local.csv")
ax1.plot(
    fit_T_scan_local["Temperature (K)"],
    fit_T_scan_local["Rate (1/s)"],
    "--",
    zorder=0,
    label="global fit (local)",
    color=fitcolor_local,
)

ax1.set_xlabel("$T$ (K)")
ax1.set_ylabel("$1/T_{1}$ (s$^{-1}$)")

"""
ax1.set_title(
    "$B_{0} = %.3f$ T" % fit_T_scan["Field (T)"].mean()
    + "\n"
    + "$E = %.2f$ keV" % fit_T_scan["Energy (keV)"].mean(),
    loc="right",
)
"""

ax1.set_xlim(0, None)
# ax1.set_ylim(0, None)


# E scan (LT)
# fig2, ax2 = plt.subplots(1, 1, figsize=fs, constrained_layout=True)

ax2.errorbar(
    data_E_scan_LT["Energy(keV)"],
    data_E_scan_LT["Rate(1/s)"],
    xerr=data_E_scan_LT["EnergyError(keV)"],
    yerr=data_E_scan_LT["RateError(1/s)"],
    fmt="s",
    zorder=1,
    color="black",
    label="data [$T = %.2f$ K]" % data_E_scan_LT["Temperature(K)"].mean(),
)

fit_E_scan_LT = pd.read_csv("fit_E_scan_LT.csv")
ax2.plot(
    fit_E_scan_LT["Energy (keV)"],
    fit_E_scan_LT["Rate (1/s)"],
    "-",
    zorder=0,
    color=fitcolor,
)

fit_E_scan_LT_local = pd.read_csv("fit_E_scan_LT_local.csv")
ax2.plot(
    fit_E_scan_LT_local["Energy (keV)"],
    fit_E_scan_LT_local["Rate (1/s)"],
    "--",
    zorder=0,
    color=fitcolor_local,
)

ax2.set_xlabel("$E$ (keV)")
# ax2.set_ylabel("$1/T_{1}$ (s$^{-1}$)")

"""
ax2.set_title(
    "$B_{0} = %.3f$ T" % fit_E_scan_LT["Field (T)"].mean()
    + "\n"
    + "$T = %.2f$ K" % fit_E_scan_LT["Temperature (K)"].mean(),
    loc="right",
)
"""

ax2.set_xlim(0, None)
# ax2.set_ylim(0, None)


# E scan (HT)
# fig3, ax3 = plt.subplots(1, 1, figsize=fs, constrained_layout=True)

ax3.errorbar(
    data_E_scan_HT["Energy(keV)"],
    data_E_scan_HT["Rate(1/s)"],
    xerr=data_E_scan_HT["EnergyError(keV)"],
    yerr=data_E_scan_HT["RateError(1/s)"],
    fmt="v",
    zorder=1,
    color="black",
    label="data [$T = %.2f$ K]" % data_E_scan_HT["Temperature(K)"].mean(),
)

fit_E_scan_HT = pd.read_csv("fit_E_scan_HT.csv")
ax3.plot(
    fit_E_scan_HT["Energy (keV)"],
    fit_E_scan_HT["Rate (1/s)"],
    "-",
    zorder=0,
    # label="global fit",
    color=fitcolor,
)

fit_E_scan_HT_local = pd.read_csv("fit_E_scan_HT_local.csv")
ax3.plot(
    fit_E_scan_HT_local["Energy (keV)"],
    fit_E_scan_HT_local["Rate (1/s)"],
    "--",
    zorder=0,
    # label="global fit",
    color=fitcolor_local,
)

ax3.set_xlabel("$E$ (keV)")
# ax3.set_ylabel("$1/T_{1}$ (s$^{-1}$)")
"""
ax3.set_title(
    "$B_{0} = %.3f$ T" % fit_E_scan_HT["Field (T)"].mean()
    + "\n"
    + "$T = %.2f$ K" % fit_E_scan_HT["Temperature (K)"].mean(),
    loc="right",
)
"""

ax3.set_xlim(0, None)
ax3.set_ylim(0, None)

"""
gylim = ax2.get_ylim()
for a in [ax1, ax2, ax3]:
    a.set_ylim(gylim)
"""

ax1.set_title("A", loc="left")
ax2.set_title("B", loc="left")
ax3.set_title("C", loc="left")


# put all points in single legend
# https://stackoverflow.com/a/57484812
lines_labels = [ax.get_legend_handles_labels() for ax in fig1.axes]
lines, labels = [sum(lol, []) for lol in zip(*lines_labels)]


ax3.legend(
    lines,
    labels,
    title="Nb(300 nm)/Al$_{2}$O$_{3}$: [$B_{0} = %.0f$ mT]"
    % (data["Field(T)"].mean() * 1e3),
    frameon=False,
    loc="center left",
    bbox_to_anchor=(1.05, 0.5),
    labelspacing=1.5,
)


fig1.savefig("fit_thin_film_T_E_scan.pdf")
fig1.savefig("fit_thin_film_T_E_scan.png", transparent=True, dpi=300)
# fig1.savefig("fit_T_scan.pdf")
# fig2.savefig("fit_E_scan_LT.pdf")
# fig3.savefig("fit_E_scan_HT.pdf")

plt.show()
