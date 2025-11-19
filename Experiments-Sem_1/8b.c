#include <stdio.h>

//Static Storage Class
void test() {
    static int x = 1; //Will retain value across calls
    printf("x: %d\n", x);
    x++;
}

int main() {
    test();
    test();
    test();
    return 0;
}
