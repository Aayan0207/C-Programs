#include <stdio.h>

//Operator Precendence and Associativity in C
//Bitwise and Logical Operators
int main() {
    int a = 10, b = 15, c = 2;
    int result_1, result_2;

    result_1 = a & b && c;
    result_2 = a && b & c;

    printf("Result 1 = %d\nResult 2 = %d\n", result_1, result_2);
    return 0;
}