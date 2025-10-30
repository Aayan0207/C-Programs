#include <stdio.h>

//Sum of first n natural numbers
int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum is: %d", sum);
    return 0;
}