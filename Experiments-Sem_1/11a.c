#include <stdio.h>

//Pointer Basics - Accessing and Modifying Variables Using Pointers
int main() {
    int a = 4;
    int* pointer = &a;
    printf("Value: %d\n", a);
    printf("Address: %d\n", &a);
    printf("Value of pointer (Address): %d\n", pointer);
    printf("Value by pointer: %d\n", *pointer);
    return 0;
}