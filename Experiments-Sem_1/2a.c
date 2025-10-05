#include <stdio.h>

//Variables, Constants, and Data Types ; Arithmetic and Relational Operators

int main() {
    int a = 10, b = 20;
    float f = 3.14;
    char c = 'A';
    double d = 123.456789;
    const int MAX = 100;

    printf("int: %d, float: %.2f, char: %c, double: %.6f\n", a, f, c, d);
    printf("Constant MAX:  %d\n", MAX);

    printf("Size of int: %lu\n", sizeof(a));
    printf("Size of float: %lu\n", sizeof(f));
    printf("Size of char: %lu\n", sizeof(c));
    printf("Size of double: %lu\n", sizeof(d));

    // Arithmetric and Relational Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", b / a);
    printf("Modulus: %d\n", a % b);

    printf("Is a > b? %d\n", a > b);
    printf("Is a == b? %d\n", a == b);

    return 0;
}