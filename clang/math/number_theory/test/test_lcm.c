// test_lcm.c
#include <check.h>
#include "../number_theory.h"  // Include the header file for this submodule

START_TEST(test_lcm) {
    // Add appropriate test cases for lcm function here
    ck_assert_int_eq(lcm(/* arguments */), /* expected result */);
}
END_TEST

Suite *lcm_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("lcm");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_lcm);
    suite_add_tcase(s, tc_core);
    return s;
}

