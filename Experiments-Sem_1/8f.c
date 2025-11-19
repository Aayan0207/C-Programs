#include <stdio.h>
#define VERSION 2

//Conditional Compilation Using #if, #elif, #else, #endif
int main() {
#if VERSION == 1
    printf("Running Version 1.0\n");
#elif VERSION == 2
    printf("Running Version 2.0\n");
#else
    printf("Unknown Version!\n");
#endif
    return 0;
}
