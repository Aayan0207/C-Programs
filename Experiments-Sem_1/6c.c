#include <stdio.h>

//Nested if statement
//Largest of 3 numbers

int main() {
    int a, b, c;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter number 3: ");
    scanf("%d", &c);
    printf("Largest number is: ");
    if (a > b) {
        if (a > c) {
            printf("%d", a);
        }
        else {
            printf("%d", c);
        }
    }
    else {
        if (b > c) {
            printf("%d", b);
        }
        else {
            printf("%d", c);
        }
    }
    return 0;
}