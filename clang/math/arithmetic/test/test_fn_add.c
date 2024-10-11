#include <check.h>
#include "libarithmetic.h"

START_TEST(test_fn_add) {
    ck_assert_int_eq(fn_add(2, 3), 5);
    ck_assert_int_eq(fn_add(0, 0), 0);
    ck_assert_int_eq(fn_add(-1, 1), 0);
}
END_TEST

TCase *fn_add_test_case(void) {
    TCase *tc = tcase_create("Add");
    tcase_add_test(tc, test_fn_add);
    return tc;
}
