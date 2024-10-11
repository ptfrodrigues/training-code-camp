#include <stdio.h>

int main() {
    float grade1, grade2, grade3, grade4;
    float average;

    printf("Enter the first grade: ");
    scanf("%f", &grade1);

    printf("Enter the second grade: ");
    scanf("%f", &grade2);

    printf("Enter the third grade: ");
    scanf("%f", &grade3);

    printf("Enter the fourth grade: ");
    scanf("%f", &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / 4;

    printf("The average of the grades is: %.2f\n", average);

    return 0;
}
