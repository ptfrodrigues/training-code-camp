// test_gcd.c
#include <check.h>
#include "../number_theory.h"  // Include the header file for this submodule

START_TEST(test_gcd) {
    // Add appropriate test cases for gcd function here
    ck_assert_int_eq(gcd(/* arguments */), /* expected result */);
}
END_TEST

Suite *gcd_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("gcd");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_gcd);
    suite_add_tcase(s, tc_core);
    return s;
}

