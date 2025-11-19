#include <stdio.h>

//Predefined Macros
int main() {
    printf("File Name: %s\n", __FILE__);
    printf("Compiled on: %s\n", __DATE__);
    printf("Compiled at: %s\n", __TIME__);
    printf("Current Line: %d\n", __LINE__);
    return 0;
}

