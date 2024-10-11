// test_cosine.c
#include <check.h>
#include "../trigonometry.h"  // Include the header file for this submodule

START_TEST(test_cosine) {
    // Add appropriate test cases for cosine function here
    ck_assert_int_eq(cosine(/* arguments */), /* expected result */);
}
END_TEST

Suite *cosine_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("cosine");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_cosine);
    suite_add_tcase(s, tc_core);
    return s;
}

