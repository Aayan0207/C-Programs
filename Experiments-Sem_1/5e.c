#include <stdio.h>

//Operator Precendence and Associativity in C
//Increment/Decrement operators with Assignment
int main() {
    int a = 2, b = 3, result;

    result = a++ + ++b * a;
    printf("a: %d\nb: %d\nResult: %d\n", a, b, result);

    return 0;

}