# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LIBS = -lcheck -lm

# Directories
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include
TEST_DIR = tests
SORT_DIR = $(SRC_DIR)/sort

# Source and object files
SOURCES = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SORT_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SOURCES))
EXECUTABLE = $(BUILD_DIR)/Sort

# Default target
all: $(EXECUTABLE)

# Link the executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

# Compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/sort/%.o: $(SORT_DIR)/%.c
	mkdir -p $(BUILD_DIR)/sort
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -rf $(BUILD_DIR)
