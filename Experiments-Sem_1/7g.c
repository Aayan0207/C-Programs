#include <stdio.h>

//Sum of digits of a number using while loop

int main() {
    int num, remainder, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num > 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    printf("Sum is: %d", sum);
    return 0;
}