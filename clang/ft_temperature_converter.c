#include <stdio.h>

float ft_temperature_converter(float temp, char scale) {
    if (scale == 'C' || scale == 'c') {
        return (temp * 9 / 5) + 32;
    } else if (scale == 'F' || scale == 'f') {
        return (temp - 32) * 5 / 9;
    } else {
        printf("Invalid scale\n");
        return -9999;
    }
}