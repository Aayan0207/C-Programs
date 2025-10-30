#include <stdio.h>

//Multiplication Table Generator
int main() {
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter number of multiples: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}