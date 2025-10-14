#include <stdio.h>

//Operator Precendence and Associativity in C
//Comma Operator and Sequence Points
int main() {
    int a = 2, b = 4, c;

    c = (a += 5, b += a, a + b);
    printf("a: %d\nb: %d\nc: %d\n", a, b, c);

    for (a = 2, b = 6; a < 5; a++, b--) {
        printf("a: %d, b: %d\n", a, b);
    }
    return 0;
}