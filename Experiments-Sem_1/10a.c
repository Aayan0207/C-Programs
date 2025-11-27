#include <stdio.h>

//Function to compute square of a number
int square(int x) {
    return x * x;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Square: %d", square(n));
    return 0;
}