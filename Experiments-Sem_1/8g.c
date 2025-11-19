#include <stdio.h>
#define DEBUG

//Using #ifdef, #ifndef, #undef macros
int main() {
#ifdef DEBUG
    printf("Debug mode enabled\n");
#else
    printf("Deployment mode\n");
#endif

#undef DEBUG

#ifndef DEBUG
    printf("Debug macro undefined successfully\n");
#endif
    return 0;
}

