#!/bin/bash

# Create the main math directory if it doesn't exist
mkdir -p math

# Create the subdirectories
mkdir -p math/arithmetic
mkdir -p math/algebra
mkdir -p math/number_theory
mkdir -p math/geometry
mkdir -p math/trigonometry
mkdir -p math/statistics

# Create files inside the arithmetic folder
echo '// add.c
#include "arithmetic.h"

int add(int a, int b) {
    return a + b;
}' > math/arithmetic/add.c

echo '// subtract.c
#include "arithmetic.h"

int subtract(int a, int b) {
    return a - b;
}' > math/arithmetic/subtract.c

echo '// multiply.c
#include "arithmetic.h"

int multiply(int a, int b) {
    return a * b;
}' > math/arithmetic/multiply.c

echo '// divide.c
#include "arithmetic.h"

int divide(int a, int b) {
    return a / b;
}' > math/arithmetic/divide.c

echo '// modulus.c
#include "arithmetic.h"

int modulus(int a, int b) {
    return a % b;
}' > math/arithmetic/modulus.c

# Create the arithmetic.h file
echo '// arithmetic.h
#ifndef ARITHMETIC_H
#define ARITHMETIC_H

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

#endif // ARITHMETIC_H
' > math/arithmetic/arithmetic.h

# Create files inside the algebra folder
echo '// power.c
#include "exponentiation.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}' > math/algebra/power.c

echo '// root.c
#include "exponentiation.h"

int root(int base, int n) {
    // Simple square root logic for now
    return 1; // Placeholder implementation
}' > math/algebra/root.c

echo '// logarithm.c
#include "exponentiation.h"

double logarithm(double base, double value) {
    return 1.0; // Placeholder
}' > math/algebra/logarithm.c

# Create the exponentiation.h file
echo '// exponentiation.h
#ifndef EXPONENTIATION_H
#define EXPONENTIATION_H

int power(int base, int exp);
int root(int base, int n);
double logarithm(double base, double value);

#endif // EXPONENTIATION_H
' > math/algebra/exponentiation.h

# Create files inside the number_theory folder
echo '// gcd.c
#include "number_theory.h"

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}' > math/number_theory/gcd.c

echo '// lcm.c
#include "number_theory.h"

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}' > math/number_theory/lcm.c

echo '// prime.c
#include "number_theory.h"

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}' > math/number_theory/prime.c

echo '// factorial.c
#include "number_theory.h"

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}' > math/number_theory/factorial.c

# Create the number_theory.h file
echo '// number_theory.h
#ifndef NUMBER_THEORY_H
#define NUMBER_THEORY_H

int gcd(int a, int b);
int lcm(int a, int b);
int is_prime(int n);
int factorial(int n);

#endif // NUMBER_THEORY_H
' > math/number_theory/number_theory.h

# Create files inside the geometry folder
echo '// area_circle.c
#include "geometry.h"
#define PI 3.14159265359

double area_circle(double radius) {
    return PI * radius * radius;
}' > math/geometry/area_circle.c

echo '// area_triangle.c
#include "geometry.h"

double area_triangle(double base, double height) {
    return (base * height) / 2;
}' > math/geometry/area_triangle.c

echo '// perimeter_circle.c
#include "geometry.h"
#define PI 3.14159265359

double perimeter_circle(double radius) {
    return 2 * PI * radius;
}' > math/geometry/perimeter_circle.c

echo '// perimeter_polygon.c
#include "geometry.h"

double perimeter_polygon(int num_sides, double side_length) {
    return num_sides * side_length;
}' > math/geometry/perimeter_polygon.c

# Create the geometry.h file
echo '// geometry.h
#ifndef GEOMETRY_H
#define GEOMETRY_H

double area_circle(double radius);
double area_triangle(double base, double height);
double perimeter_circle(double radius);
double perimeter_polygon(int num_sides, double side_length);

#endif // GEOMETRY_H
' > math/geometry/geometry.h

# Create files inside the trigonometry folder
echo '// sine.c
#include "trigonometry.h"

double sine(double angle) {
    return 1.0; // Placeholder
}' > math/trigonometry/sine.c

echo '// cosine.c
#include "trigonometry.h"

double cosine(double angle) {
    return 1.0; // Placeholder
}' > math/trigonometry/cosine.c

echo '// tangent.c
#include "trigonometry.h"

double tangent(double angle) {
    return 1.0; // Placeholder
}' > math/trigonometry/tangent.c

# Create the trigonometry.h file
echo '// trigonometry.h
#ifndef TRIGONOMETRY_H
#define TRIGONOMETRY_H

double sine(double angle);
double cosine(double angle);
double tangent(double angle);

#endif // TRIGONOMETRY_H
' > math/trigonometry/trigonometry.h

# Create files inside the statistics folder
echo '// mean.c
#include "statistics.h"

double mean(double data[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}' > math/statistics/mean.c

echo '// median.c
#include "statistics.h"

double median(double data[], int size) {
    return 1.0; // Placeholder implementation
}' > math/statistics/median.c

echo '// standard_deviation.c
#include "statistics.h"

double standard_deviation(double data[], int size) {
    return 1.0; // Placeholder implementation
}' > math/statistics/standard_deviation.c

# Create the statistics.h file
echo '// statistics.h
#ifndef STATISTICS_H
#define STATISTICS_H

double mean(double data[], int size);
double median(double data[], int size);
double standard_deviation(double data[], int size);

#endif // STATISTICS_H
' > math/statistics/statistics.h

echo "Folder structure and files have been created inside the 'math' directory."
