#include <stdio.h>
#include <math.h>  // Opcional, mas pode ser usada para a função pow()

int main() {
    float number, square, cube;

    printf("Enter a number: ");
    scanf("%f", &number);

    square = number * number;
    cube = number * number * number;
    printf("Square of %.2f is: %.2f\n", number, square);
    printf("Cube of %.2f is: %.2f\n", number, cube);

    return 0;
}
