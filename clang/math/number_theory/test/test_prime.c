// test_prime.c
#include <check.h>
#include "../number_theory.h"  // Include the header file for this submodule

START_TEST(test_prime) {
    // Add appropriate test cases for prime function here
    ck_assert_int_eq(prime(/* arguments */), /* expected result */);
}
END_TEST

Suite *prime_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("prime");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_prime);
    suite_add_tcase(s, tc_core);
    return s;
}

