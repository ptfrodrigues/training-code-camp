// test_standard_deviation.c
#include <check.h>
#include "../statistics.h"  // Include the header file for this submodule

START_TEST(test_standard_deviation) {
    // Add appropriate test cases for standard_deviation function here
    ck_assert_int_eq(standard_deviation(/* arguments */), /* expected result */);
}
END_TEST

Suite *standard_deviation_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("standard_deviation");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_standard_deviation);
    suite_add_tcase(s, tc_core);
    return s;
}

