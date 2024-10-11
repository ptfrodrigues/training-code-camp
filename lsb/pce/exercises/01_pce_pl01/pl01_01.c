#include <stdio.h>

int main() {
    float n1, n2, mean;

    printf("Enter first number: ");
    scanf("%f", &n1);
    printf("Enter second number: ");
    scanf("%f", &n2);

    mean = (n1 + n2) / 2;
    printf("Arithmetic mean is: %.2f", mean);
    printf("\n");
}