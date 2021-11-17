# triumf++

triumf++ is a collection of [C++] routines aimed at aiding the analysis of
condensed matter experiments ([μSR] and [β-NMR]) performed at [TRIUMF]'s [CMMS]
facility.
It is designed to be header-only, in the hope that it makes the code easier to use.
The source code for the collection can be found at:
<https://github.com/rmlmcfadden/triumfpp>.

## Requirements

- [C++17] : Recent revision of the [C++] programming language.
- [Boost] : A set of high-quality, peer-reviewed, free and portable [C++] libraries.
- [ROOT] : An open-source data analysis framework used by high energy physics and others. 

## Organization

This repository is organized into several subdirectories:

- `include/`: contains the collection's source code (all `.hpp` files).
- `examples/`: contains several scripts/programs showcasing the use of the routines in the collection.
- `scripts/`: contains scrips used to auto-generate some the source code (for developers only).
- `tests/`: contains code for performing unit tests on the routines in the headers.
- `tmp/`: contains broken/incomplete files that haven't yet been fixed or purged.

## Documentation

Some documentation of the source code (generated via [Doxygen])
can be found at: <https://rmlmcfadden.github.io/triumfpp/>.

[Doxygen]: https://www.doxygen.nl/
[ROOT]: https://root.cern/
[Boost]: https://boost.org/
[TRIUMF]: https://triumf.ca/
[CMMS]: https://cmms.triumf.ca/
[C++]: https://en.cppreference.com/w/
[C++17]: https://en.cppreference.com/w/cpp/17
[μSR]: https://en.wikipedia.org/wiki/Muon_spin_spectroscopy
[β-NMR]: https://bnmr.triumf.ca
