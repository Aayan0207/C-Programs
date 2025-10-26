#include <stdio.h>

//Operator Precendence and Associativity in C
//Basic Precedence
int main() {
    int a = 12, b = 6, c = 3;
    int result_1, result_2, result_3;

    result_1 = a + b * c; // a + (b * c)
    result_2 = (a + b) * c;

    printf("Result 1: %d\n", result_1);
    printf("Result 2: %d\n", result_2);

    result_3 = a + b * c > b + c && c - a > b;
    printf("Result 3: %d\n", result_3);

    return 0;
}