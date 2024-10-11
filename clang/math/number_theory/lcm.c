// lcm.c
#include "number_theory.h"

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
