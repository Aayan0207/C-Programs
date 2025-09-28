#include <stdio.h>

int main()
{
    int x = 5, y = 0;

    // Logical operators
    printf("x && y: %d\n", x && y);
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);

    // Bitwise operators
    int a = 6, b = 3;
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("a << 1: %d\n", a << 1);
    printf("b >> 1: %d\n", b >> 1);

    return 0;
}