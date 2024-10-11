#include <check.h>
#include "libarithmetic_tests.h"

Suite *arithmetic_suite(void) {
    Suite *s;

    s = suite_create("Arithmetic Suite");

    suite_add_tcase(s, &fn_add_test_case);

    return s;
}
