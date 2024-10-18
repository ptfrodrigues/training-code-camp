#include <stdio.h>

char to_lowercase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

char to_uppercase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    }
    return ch;
}

void calculate_switch(int number, int option) {
    switch (option) {
        case 1:
            printf("The double of %d is %d\n", number, number * 2);
            break;
        case 2:
            printf("The square of %d is %d\n", number, number * number);
            break;
        case 3:
            printf("The cube of %d is %d\n", number, number * number * number);
            break;
        default:
            printf("Invalid option. Please select 1, 2, or 3.\n");
            break;
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

    printf("Result using switch structure:\n");
    calculate_switch(number, option);

    return 0;
}
