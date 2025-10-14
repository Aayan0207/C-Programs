#include <stdio.h>

//Operator Precendence and Associativity in C
//Conditional (Ternary) and Assignment Operators
int main() {
    int a = 4, b = 6, c;

    c = a > b ? a : (b = a + b);
    printf("a: %d\nb: %d\nc: %d\n", a, b, c);
    return 0;
}