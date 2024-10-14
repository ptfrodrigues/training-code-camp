#include <stdio.h>

int main() {
    float grade;
    printf("Enter the grade: ");
    scanf("%f",&grade);

    if(grade<10)
        printf("The student has failed!");
    else
        printf("The student has passed!");

    return 0;
}