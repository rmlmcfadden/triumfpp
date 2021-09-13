
CXX         = g++
INSTALL_DIR = /usr/local/include
INCLUDE_DIR = include/

TEST_DIR = tests/
TEST_SRC = $(shell find $(TEST_DIR) -name "*.cpp")
TEST_EXE = $(patsubst %.cpp, %, $(TEST_SRC))

codata_constants:
	cd scripts && python3 generate_codata_headers_and_tests.py

.PHONY: tests

tests:
	@for TEST in $(patsubst %.cpp, %, $(shell find $(TEST_DIR) -name "*.cpp")); do \
		echo $(CXX) $$TEST.cpp -I $(INCLUDE_DIR) -o $(patsubst %.cpp, %, $$TEST); \
		$(CXX) $$TEST.cpp -I $(INCLUDE_DIR) -o $(patsubst %.cpp, %, $$TEST); \
	done
	#$(foreach TEST, $(wildcard $(TEST_DIR)*.cpp), $(CXX) $(TEST) -I $(INCLUDE_DIR) -o $(patsubst %.cpp, %, $(TEST));)

.PHONY: tests

format_headers:
	cd scripts && python3 format_headers.py

.PHONY: count_lines

count_lines:
	find include -name "*.hpp" | xargs wc -l

