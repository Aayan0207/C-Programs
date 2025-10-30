#include <stdio.h>

//Demonstrate break and continue statements in loops
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (i == 8) {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}