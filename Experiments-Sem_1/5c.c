#include <stdio.h>

//Operator Precendence and Associativity in C
//Associativity Example
int main() {
    int a = 15, b = 4, c = 8, result;

    result = a = b = c; //Assigment works from right to left
    printf("a: %d\nb: %d\nc: %d\nResult: %d\n", a, b, c, result);

    return 0;
}