#include <stdio.h>

//Pointer Arithmetic and Arrat Access using Pointers
int main() {
    int arr[5] = { 1,2,3,4,5 };
    int* start = arr;
    printf("Displaying: \n ");
    for (int i = 0; i < 5;i++) {
        printf("Element %d: %d\n", i + 1, *(start + i));
    }
    printf("\nModification: \n");
    for (int i = 0; i < 5;i++) {
        *(start + i) += 5;
    }
    for (int i = 0; i < 5;i++) {
        printf("Element %d: %d\n", i + 1, *(start + i));
    }
    return 0;
}