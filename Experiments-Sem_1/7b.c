#include <stdio.h>

//Factorial of a Number using while loop

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long long factorial = 1;
    while (n > 0) {
        factorial *= n;
        n -= 1;
    }
    printf("Factorial: %lld", factorial);
    return 0;
}