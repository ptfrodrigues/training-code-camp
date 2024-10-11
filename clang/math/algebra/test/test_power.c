// test_power.c
#include <check.h>
#include "../algebra.h"  // Include the header file for this submodule

START_TEST(test_power) {
    // Add appropriate test cases for power function here
    ck_assert_int_eq(power(/* arguments */), /* expected result */);
}
END_TEST

Suite *power_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("power");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_power);
    suite_add_tcase(s, tc_core);
    return s;
}

