#include <stdio.h>

int sum_upto(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    int sum = sum_upto(n);
    printf("The sum is: %d\n", sum);

    return 0;
}
