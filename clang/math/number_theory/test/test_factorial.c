// test_factorial.c
#include <check.h>
#include "../number_theory.h"  // Include the header file for this submodule

START_TEST(test_factorial) {
    // Add appropriate test cases for factorial function here
    ck_assert_int_eq(factorial(/* arguments */), /* expected result */);
}
END_TEST

Suite *factorial_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("factorial");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_factorial);
    suite_add_tcase(s, tc_core);
    return s;
}

