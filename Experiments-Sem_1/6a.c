#include <stdio.h>

//Simple if-else if-else statement
//Positive or Negative Number
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive");
    }
    else if (num < 0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    return 0;
}