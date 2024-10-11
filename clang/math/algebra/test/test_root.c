// test_root.c
#include <check.h>
#include "../algebra.h"  // Include the header file for this submodule

START_TEST(test_root) {
    // Add appropriate test cases for root function here
    ck_assert_int_eq(root(/* arguments */), /* expected result */);
}
END_TEST

Suite *root_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("root");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_root);
    suite_add_tcase(s, tc_core);
    return s;
}

