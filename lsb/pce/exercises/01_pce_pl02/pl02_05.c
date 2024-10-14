#include <stdio.h>

void calculate_if(int number, int option) {
    if (option == 1) {
        printf("The double of %d is %d\n", number, number * 2);
    } else if (option == 2) {
        printf("The square of %d is %d\n", number, number * number);
    } else if (option == 3) {
        printf("The cube of %d is %d\n", number, number * number * number);
    } else {
        printf("Invalid option. Please select 1, 2, or 3.\n");
    }
}

int main() {
    int number, option;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Choose an option:\n");
    printf("1 - Double\n");
    printf("2 - Square\n");
    printf("3 - Cube\n");
    printf("Enter your option: ");
    scanf("%d", &option);

    printf("Result using if-else structure:\n");
    calculate_if(number, option);

    return 0;
}