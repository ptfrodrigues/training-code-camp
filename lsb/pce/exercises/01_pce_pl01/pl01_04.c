#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 < num2) printf("Numbers in ascending order: %d, %d\n", num1, num2);
    else if (num1 > num2) printf("Numbers in ascending order: %d, %d\n", num2, num1);
            else printf("Numbers are equals");

    return 0;
}
