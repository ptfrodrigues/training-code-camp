// test_mean.c
#include <check.h>
#include "../statistics.h"  // Include the header file for this submodule

START_TEST(test_mean) {
    // Add appropriate test cases for mean function here
    ck_assert_int_eq(mean(/* arguments */), /* expected result */);
}
END_TEST

Suite *mean_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("mean");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_mean);
    suite_add_tcase(s, tc_core);
    return s;
}

