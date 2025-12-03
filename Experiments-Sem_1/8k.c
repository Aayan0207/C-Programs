#include <stdio.h>
#define REQUIRED_VERSION 4

#if REQUIRED_VERSION < 2
#error "Version too old."
#endif

#pragma message("Compiling programs.") //Gives message during compilation

//Error and Pragma preprocessor directives
int main() {
    printf("Program compiled successfully.\n");
    return 0;
}

