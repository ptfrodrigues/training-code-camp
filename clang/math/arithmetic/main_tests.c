// main_test.c
#include <check.h>
#include <stdlib.h>
#include "test_arithmetic_suite.c"  // Include the suite file

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    sr = srunner_create(arithmetic_suite());

    srunner_run_all(sr, CK_NORMAL);

    number_failed = srunner_ntests_failed(sr);

    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
