#include <stdio.h>

//Write a program to find largest of 4 numbers using nested-if

int main() {
    int a, b, c, d;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter number 3: ");
    scanf("%d", &c);
    printf("Enter number 4: ");
    scanf("%d", &d);
    printf("The largest number is: ");
    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("%d", a);
            }
            else {
                printf("%d", d);
            }
        }
        else {
            if (c > d) {
                printf("%d", c);
            }
            else {
                printf("%d", d);
            }
        }
    }
    else {
        if (b > c) {
            if (b > d) {
                printf("%d", b);
            }
            else {
                printf("%d", d);
            }
        }
        else {
            if (c > d) {
                printf("%d", c);
            }
            else {
                printf("%d", d);
            }
        }
    }
    return 0;
}