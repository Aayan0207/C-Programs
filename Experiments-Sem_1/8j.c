#include <stdio.h>
#define CREATE_VAR(name, val) name##val

//Token - Pasting Operator (##)
int main() {
    int CREATE_VAR(test, 0) = 4;  // becomes value1
    printf("Value of variable test0: %d\n", test0);
    return 0;
}
