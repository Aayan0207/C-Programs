#include <stdio.h>

//Reverse digits of a number using a do-while loop

int main() {
    int num, remainder, reverse = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    do {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    } while (num != 0);
    printf("Reversed number: %d", reverse);
    return 0;
}