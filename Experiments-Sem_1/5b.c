#include <stdio.h>

//Operator Precendence and Associativity in C
//Relational and Logical Precedence
int main() {
    int a = 15, b = 4, c = 8, result;

    result = a + b > c && b > a;
    printf("Result: %d\n", result);

    return 0;
}