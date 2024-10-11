// test_area_circle.c
#include <check.h>
#include "../geometry.h"  // Include the header file for this submodule

START_TEST(test_area_circle) {
    // Add appropriate test cases for area_circle function here
    ck_assert_int_eq(area_circle(/* arguments */), /* expected result */);
}
END_TEST

Suite *area_circle_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("area_circle");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_area_circle);
    suite_add_tcase(s, tc_core);
    return s;
}

