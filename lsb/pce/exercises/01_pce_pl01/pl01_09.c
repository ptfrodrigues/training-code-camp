#include <stdio.h>

int main() {
    int total_minutes, days, hours, minutes;

    printf("Enter the total number of minutes: ");
    scanf("%d", &total_minutes);

    days = total_minutes / (24 * 60);
    total_minutes = total_minutes % (24 * 60);

    hours = total_minutes / 60;
    minutes = total_minutes % 60;

    printf("%d minutes correspond to %d days, %d hours, and %d minutes.\n", total_minutes, days, hours, minutes);

    return 0;
}
