# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Directories
SRC_DIR = src
TEST_DIR = test
INCLUDE_DIR = include

# Source and test files
SRC_FILES = $(SRC_DIR)/fn_add.c
TEST_FILES = $(TEST_DIR)/test_fn_add.c $(TEST_DIR)/test_arithmetic_suite.c

# Output binary
OUTPUT = test_runner

# Libraries and flags for linking Check library
LDFLAGS = -lcheck -lm

# Include flag to specify where to find header files
INCLUDES = -I$(INCLUDE_DIR)

# Target: all, which will compile the test_runner executable
all: $(OUTPUT)

# Rule to create the test_runner executable
$(OUTPUT): $(SRC_FILES) $(TEST_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(OUTPUT) $(SRC_FILES) $(TEST_FILES) $(LDFLAGS)

# Clean target to remove the test_runner executable
clean:
	rm -f $(OUTPUT)

