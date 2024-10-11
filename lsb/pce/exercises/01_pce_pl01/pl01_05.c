#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
