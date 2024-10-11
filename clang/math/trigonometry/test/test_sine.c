// test_sine.c
#include <check.h>
#include "../trigonometry.h"  // Include the header file for this submodule

START_TEST(test_sine) {
    // Add appropriate test cases for sine function here
    ck_assert_int_eq(sine(/* arguments */), /* expected result */);
}
END_TEST

Suite *sine_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("sine");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_sine);
    suite_add_tcase(s, tc_core);
    return s;
}

