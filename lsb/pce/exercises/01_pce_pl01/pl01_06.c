#include <stdio.h>

int main() {
    float hourly_rate, hours_worked, salary;

    printf("Enter how much you earn per hour: ");
    scanf("%f", &hourly_rate);

    printf("Enter the number of hours worked in the month: ");
    scanf("%f", &hours_worked);

    salary = hourly_rate * hours_worked;

    printf("Your total salary for the month is: %.2f\n", salary);

    return 0;
}
