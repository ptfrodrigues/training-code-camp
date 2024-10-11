// test_area_triangle.c
#include <check.h>
#include "../geometry.h"  // Include the header file for this submodule

START_TEST(test_area_triangle) {
    // Add appropriate test cases for area_triangle function here
    ck_assert_int_eq(area_triangle(/* arguments */), /* expected result */);
}
END_TEST

Suite *area_triangle_suite(void) {
    Suite *s;
    TCase *tc_core;
    s = suite_create("area_triangle");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_area_triangle);
    suite_add_tcase(s, tc_core);
    return s;
}

