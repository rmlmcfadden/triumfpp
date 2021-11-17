
CXX         = g++
INSTALL_DIR = /usr/local/include
INCLUDE_DIR = include/

TEST_DIR = tests/
TEST_SRC = $(shell find $(TEST_DIR) -name "*.cpp")
TEST_EXE = $(patsubst %.cpp, %, $(TEST_SRC))

.PHONY: codata_constants
codata_constants:
	cd scripts && python3 generate_codata_headers_and_tests.py

.PHONY: tests
tests:
	@for TEST in $(patsubst %.cpp, %, $(shell find $(TEST_DIR) -name "*.cpp")); do \
		echo $(CXX) $$TEST.cpp -I $(INCLUDE_DIR) -o $(patsubst %.cpp, %, $$TEST); \
		$(CXX) $$TEST.cpp -I $(INCLUDE_DIR) -o $(patsubst %.cpp, %, $$TEST); \
	done
	#$(foreach TEST, $(wildcard $(TEST_DIR)*.cpp), $(CXX) $(TEST) -I $(INCLUDE_DIR) -o $(patsubst %.cpp, %, $(TEST));)

.PHONY: tests/codata
tests/codata: tests/codata_2002 tests/codata_2006 tests/codata_2010 tests/codata_2014 tests/codata_2018

.PHONY: tests/codata_2002
tests/codata_2002:
	$(CXX) tests/codata_2002.cpp -I $(INCLUDE_DIR) -o tests/codata_2002

.PHONY: tests/codata_2006
tests/codata_2006:
	$(CXX) tests/codata_2006.cpp -I $(INCLUDE_DIR) -o tests/codata_2006

.PHONY: tests/codata_2010
tests/codata_2010:
	$(CXX) tests/codata_2010.cpp -I $(INCLUDE_DIR) -o tests/codata_2010

.PHONY: tests/codata_2014
tests/codata_2014:
	$(CXX) tests/codata_2014.cpp -I $(INCLUDE_DIR) -o tests/codata_2014

.PHONY: tests/codata_2018
tests/codata_2018:
	$(CXX) tests/codata_2018.cpp -I $(INCLUDE_DIR) -o tests/codata_2018

.PHONY: tests/bnmr_slr
tests/bnmr_slr:
	$(CXX) tests/bnmr_slr.cpp -I $(INCLUDE_DIR) -o tests/bnmr_slr

.PHONY: tests/superconductivity
tests/superconductivity: tests/superconductivity_bcs tests/superconductivity_phenomenology tests/superconductivity_pippard

.PHONY: tests/superconductivity_bcs
test/superconductivity_bcs:
	$(CXX) tests/superconductivity_bcs.cpp -I $(INCLUDE_DIR) -o tests/superconductivity_bcs
	
.PHONY: tests/superconductivity_phenomenology
tests/superconductivity_phenomenology:
	$(CXX) tests/superconductivity_phenomenology.cpp -I $(INCLUDE_DIR) -o tests/superconductivity_phenomenology

.PHONY: tests/superconductivity_pippard
tests/superconductivity_pippard:
	$(CXX) tests/superconductivity_pippard.cpp -I $(INCLUDE_DIR) -o tests/superconductivity_pippard

.PHONY: format_headers
format_headers:
	cd scripts && python3 format_headers.py

.PHONY: count_lines
count_lines:
	find include -name "*.hpp" | xargs wc -l

.PHONY: install
install:
	cp -r $(INCLUDE_DIR)/triumf $(INSTALL_DIR)

.PHONY: uninstall
uninstall:
	rm -r $(INSTALL_DIR)/triumf
