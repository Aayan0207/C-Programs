#include <stdio.h>

//Function to determine prime numbers
int prime(int n) {
    for (int i = 2; i <= n / 2 + 1; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (prime(n)) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}