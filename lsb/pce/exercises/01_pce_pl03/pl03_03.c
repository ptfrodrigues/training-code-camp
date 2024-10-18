#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int num;
    char check_err;
    unsigned long long f;

    printf("Enter a number: ");
    check_err = scanf("%d", &num);

    if (check_err != 1 || num < 0)
    {
        printf("Error: Invalid input.\n");
        return 1;
    }

    f = factorial(num);
    printf("The factorial of %d is: %llu\n", num, f);

    return 0;
}
