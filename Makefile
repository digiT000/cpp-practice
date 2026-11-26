CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra

# Default file to build. Override with: make run FILE=path/to/file.cpp
FILE := introduction/part1/lecture2.cpp
BUILD_DIR := build
OUT  := $(BUILD_DIR)/$(basename $(FILE))

.PHONY: build run clean

build:
	@mkdir -p $(dir $(OUT))
	$(CXX) $(CXXFLAGS) $(FILE) -o $(OUT)

run: build
	./$(OUT)

clean:
	rm -rf $(BUILD_DIR)
