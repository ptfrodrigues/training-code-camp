#include <stdio.h>

int main() {
    float meters, centimeters;

    printf("Enter the value in meters: ");
    scanf("%f", &meters);

    centimeters = meters * 100;

    printf("%.2f meters is equal to %.2f centimeters\n", meters, centimeters);

    return 0;
}
