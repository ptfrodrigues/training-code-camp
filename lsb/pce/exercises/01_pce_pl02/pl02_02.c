#include <stdio.h>

void addition(int num1, int num2) {
    int sum;
    sum = num1 + num2;
    printf("Addition: %d\n", sum);
}
void subtraction(int num1, int num2) {
    int sub;
    sub = num1 - num2;
    printf("Subtraction: %d\n", sub);
}
void multiplication(int num1, int num2) {
    int multi;
    multi = num1 * num2;
    printf("Multiplication: %d\n", multi);
}
void division(int num1, int num2) {
    float div;
    if(!num2)
        printf("Can divide by zero!\n");
    else {
        div = (float)num1 / num2;
        printf("Division: %.2f\n", div);
    }
}

void arithmetic(int num1, int num2, int option) {
    if(!option) {
        addition(num1, num2);
        subtraction(num1, num2);
        multiplication(num1, num2);
        division(num1, num2);
    } else
        printf("Function incomplete! Still coding!!");
}

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("ENter second number: ");
    scanf("%d", &num2);
    arithmetic(num1, num2, 0);
    return 0;
}