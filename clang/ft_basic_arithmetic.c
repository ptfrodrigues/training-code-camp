#include <stdio.h>

void ft_basic_arithmetic(int a, int b) {
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    if(b != 0){
        printf("Quotiente: %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    } else
        printf("Error: Cannot divide by zero!\n");
    
}