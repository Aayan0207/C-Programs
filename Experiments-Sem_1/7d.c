#include <stdio.h>

//Generate Fibonacci Series using For Loop

int main() {
    int n, prev = 0, curr = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 2; i <= n + 1; i++) {
        printf("%d ", prev);
        int tmp = prev;
        prev = curr;
        curr = tmp + curr;
    }
    return 0;
}