#include <stdio.h>

//Automatic Storage Class
void test() {
    auto int x = 1; //Standard method
    printf("x: %d\n", x);
    x++;
}

int main() {
    test();
    test();
    test();
    return 0;
}
