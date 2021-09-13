#!/usr/bin/python3

import os
from scipy import constants

# name translation
def translate_name(name):
    return (
        name.replace(
            "{220} lattice spacing of silicon",
            "lattice spacing of silicon {220}",
        )
        .replace(
            "(220) lattice spacing of silicon",
            "lattice spacing of silicon (220)",
        )
        .replace(".", "")
        .replace(",", "")
        .replace("{", "")
        .replace("}", "")
        .replace("(", "")
        .replace(")", "")
        .replace("-", "_")
        .replace(" ", "_")
        .replace("/", "_")
    )


# translate the dictionaries in SciPy to something useable in C++
def scipy2hpp(codata_dict, namespace):
    _codata_txt = ""
    for name in codata_dict:
        value, unit, uncertainty = codata_dict[name]
        precision = uncertainty / abs(value)
        varname = translate_name(name)
        _codata_txt += "/// \\brief CODATA recommended value for the %s (%s).\n" % (name, namespace.split("_")[-1])
        _codata_txt += "/// \details %s = (%s ± %s) %s.\n" % (name, value, uncertainty, unit)
        _codata_txt += "template <typename T>"
        _codata_txt += "struct %s {\n" % varname
        # _codata_txt += "static_assert(std::is_floating_point<T>::value, \"%s can only be instantiated with floating point types\");\n" % varname
        # _codata_txt += "static constexpr std::string name() { return \"std::string(%s)\"; }\n" % name
        # _codata_txt += "static constexpr std::string unit() { return \"%s\"; }\n" % unit
        _codata_txt += "/// \\brief Returns the constant's value.\n"
        _codata_txt += "/// \details value = %s %s.\n" % (value, unit)
        _codata_txt += "/// \code{.cpp}\n"
        _codata_txt += "/// // example use\n"
        _codata_txt += "/// using namespace %s;\n" % namespace
        _codata_txt += "/// double value = %s<double>::value();\n" % varname
        _codata_txt += "/// \endcode\n"
        _codata_txt += (
            "static inline constexpr T value() { return static_cast<T>(%s); }\n" % value
        )
        _codata_txt += "/// \\brief Returns the constant's uncertainty.\n"
        _codata_txt += "/// \details uncertainty = %s %s.\n" % (uncertainty, unit)
        _codata_txt += "/// \code{.cpp}\n"
        _codata_txt += "/// // example use\n"
        _codata_txt += "/// using namespace %s;\n" % namespace
        _codata_txt += "/// double uncertainty = %s<double>::uncertainty();\n" % varname
        _codata_txt += "/// \endcode\n"
        _codata_txt += (
            "static inline constexpr T uncertainty() { return static_cast<T>(%s); }\n"
            % uncertainty
        )
        #_codata_txt += "/// \\brief \n"
        _codata_txt += "/// \\brief Returns the constant's precision (i.e., the relative uncertainty).\n"
        _codata_txt += "/// \details precision = %s.\n" % precision
        _codata_txt += "/// \code{.cpp}\n"
        _codata_txt += "/// // example use\n"
        _codata_txt += "/// using namespace %s;\n" % namespace
        _codata_txt += "/// double precision = %s<double>::precision();\n" % varname
        _codata_txt += "/// \endcode\n"
        _codata_txt += (
            "static inline constexpr T precision() { return std::abs(static_cast<T>(%s) / static_cast<T>(%s)); }\n"
            % (uncertainty, value)
        )
        # _codata_txt += "constexpr T operator()() { return value(); }\n"
        _codata_txt += "};\n\n"
    return _codata_txt


def scipy2cpp(codata_dict, namespace):
    _codata_txt = ""
    for name in codata_dict:
        value, unit, uncertainty = codata_dict[name]
        precision = uncertainty / abs(value)
        varname = translate_name(name)
        _codata_txt += "// %s\n" % name
        _codata_txt += "// (%s ± %s) %s\n" % (value, uncertainty, unit)
        _codata_txt += "BOOST_AUTO_TEST_CASE_TEMPLATE(%s, T, test_types) {\n" % varname
        # _codata_txt += "using namespace %s;\n" % namespace
        # test value
        _codata_txt += "BOOST_TEST(std::isfinite(%s::%s<T>::value()));\n" % (
            namespace,
            varname,
        )
        _codata_txt += "BOOST_TEST(%s::%s<T>::value() == static_cast<T>(%s));\n" % (
            namespace,
            varname,
            value,
        )
        # test uncertainty
        _codata_txt += "BOOST_TEST(std::isfinite(%s::%s<T>::uncertainty()));\n" % (
            namespace,
            varname,
        )
        _codata_txt += (
            "BOOST_TEST(%s::%s<T>::uncertainty() == static_cast<T>(%s));\n"
            % (
                namespace,
                varname,
                uncertainty,
            )
        )
        # test precision
        _codata_txt += "BOOST_TEST(std::isfinite(%s::%s<T>::precision()));\n" % (
            namespace,
            varname,
        )
        _codata_txt += "BOOST_TEST(!std::signbit(%s::%s<T>::precision()));\n" % (
            namespace,
            varname,
        )
        _codata_txt += "}\n\n"
    return _codata_txt


# write the CODATA values for each revision catalogued in SciPy
codata_revisions = [
    ["2002", constants.codata._physical_constants_2002],
    ["2006", constants.codata._physical_constants_2006],
    ["2010", constants.codata._physical_constants_2010],
    ["2014", constants.codata._physical_constants_2014],
    ["2018", constants.codata._physical_constants_2018],
]


for revision in codata_revisions:
    YEAR, DATA_DICT = revision
    NAME = "codata_%s" % YEAR
    NAMESPACE = "triumf::constants::%s" % NAME
    HEADER_FILE = "%s.hpp" % NAME
    HEADER_GUARD = "TRIUMF_CONSTANTS_CODATA_%s_HPP" % YEAR
    HEADER_PATH = "../include/triumf/constants/"
    HEADER_FULL_PATH = HEADER_PATH + HEADER_FILE

    with open(HEADER_FULL_PATH, "w") as fh:
        fh.write("#ifndef %s\n" % HEADER_GUARD)
        fh.write("#define %s\n" % HEADER_GUARD)
        fh.write("\n")
        fh.write("#include <cmath>\n")
        fh.write("#include <type_traits>\n")
        fh.write("\n")
        fh.write("// TRIUMF: Canada's particle accelerator centre\n")
        fh.write("namespace triumf {\n\n")
        fh.write("// \n")
        fh.write("namespace constants {\n\n")
        fh.write(
            "// Committee on Data (CODATA) of the International Science Council (ISC)\n"
        )
        fh.write("// recommended values of fundamental physical constants: %s\n" % YEAR)
        fh.write("// https://physics.nist.gov/cuu/Constants/\n")
        fh.write("// https://physics.nist.gov/cuu/Constants/Table/allascii.txt\n")
        fh.write("namespace %s {\n\n" % NAME)
        # define the classes
        data_txt = scipy2hpp(DATA_DICT, NAMESPACE)
        fh.write(data_txt)
        #
        fh.write("} // namespace %s\n\n" % NAME)
        fh.write("} // namespace constants\n\n")
        fh.write("} // namespace triumf\n\n")
        fh.write("\n")
        fh.write("#endif // %s\n" % HEADER_GUARD)

    # format the generated code
    os.system("clang-format -i %s" % HEADER_FULL_PATH)

    TEST_FILE = "%s.cpp" % NAME
    TEST_PATH = "../tests/"
    TEST_FULL_PATH = TEST_PATH + TEST_FILE

    with open(TEST_FULL_PATH, "w") as fh:
        fh.write("#define BOOST_TEST_MODULE CODATA_%s\n" % YEAR)
        fh.write("#include <boost/test/included/unit_test.hpp>\n\n")
        fh.write("#include <cmath>\n")
        fh.write("#include <tuple>\n\n")
        fh.write("typedef std::tuple<float, double, long double> test_types;\n\n")
        fh.write("#include <triumf/constants/%s>\n\n" % HEADER_FILE)
        # fh.write("using namespace triumf::constants::%s;\n\n" % NAME)
        #
        data_txt = scipy2cpp(DATA_DICT, NAMESPACE)
        fh.write(data_txt)
        # fh.write("//\n")

    # format the generated code
    os.system("clang-format -i %s" % TEST_FULL_PATH)
