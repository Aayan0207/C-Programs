#include <stdio.h>
#define TWICE(x) (2*x)
#define MIN(a,b) (a < b ? a : b)

int main() {
    int a = 18, b = 36;
    printf("Twice of %d: %d\n", a, TWICE(a));
    printf("Minimum between %d and %d: %d\n", a, b, MIN(a, b));
    return 0;
}

