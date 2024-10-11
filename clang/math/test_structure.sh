#!/bin/bash

# Base directory (where the math folder is located)
BASE_DIR="./"

# Iterate over each subdirectory in the math folder
for dir in "$BASE_DIR"/*; do
    # Only proceed if it's a directory
    if [ -d "$dir" ]; then
        # Create the test folder inside the subdirectory
        TEST_DIR="$dir/test"
        mkdir -p "$TEST_DIR"

        # Iterate over each .c file in the subdirectory (ignoring the test folder itself)
        for c_file in "$dir"/*.c; do
            # Get the function name from the file name (without the extension)
            func_name=$(basename "$c_file" .c)

            # Create the test file with the pattern test_[function].c
            test_file="$TEST_DIR/test_${func_name}.c"

            # Write the boilerplate code to the test file
            echo "// test_${func_name}.c
#include <check.h>
#include \"../$(basename "$dir").h\"  // Include the header file for this submodule

START_TEST(test_${func_name}) {
    // Add appropriate test cases for ${func_name} function here
    ck_assert_int_eq(${func_name}(/* arguments */), /* expected result */);
}
END_TEST

Suite *${func_name}_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create(\"${func_name}\");
    tc_core = tcase_create(\"Core\");
    tcase_add_test(tc_core, test_${func_name});
    suite_add_tcase(s, tc_core);
    return s;
}
" > "$test_file"

            echo "Created test file: $test_file"
        done
    fi
done

echo "Test folder and files have been created."
