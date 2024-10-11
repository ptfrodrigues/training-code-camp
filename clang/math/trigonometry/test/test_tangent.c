// test_tangent.c
#include <check.h>
#include "../trigonometry.h"  // Include the header file for this submodule

START_TEST(test_tangent) {
    // Add appropriate test cases for tangent function here
    ck_assert_int_eq(tangent(/* arguments */), /* expected result */);
}
END_TEST

Suite *tangent_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("tangent");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_tangent);
    suite_add_tcase(s, tc_core);
    return s;
}

