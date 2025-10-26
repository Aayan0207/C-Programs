#include <stdio.h>

//Simple if-else statement
//Odd or Even
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
    return 0;
}