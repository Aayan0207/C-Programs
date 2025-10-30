#include <stdio.h>

//Determine Prime using a Loop

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}