// test_median.c
#include <check.h>
#include "../statistics.h"  // Include the header file for this submodule

START_TEST(test_median) {
    // Add appropriate test cases for median function here
    ck_assert_int_eq(median(/* arguments */), /* expected result */);
}
END_TEST

Suite *median_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("median");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_median);
    suite_add_tcase(s, tc_core);
    return s;
}

