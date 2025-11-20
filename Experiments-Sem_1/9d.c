#include <stdio.h>

//Counter of Even and Odd numbers in an array
int main() {
    int arr[100], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int odd = 0, even = 0;
    for (int i = 0; i < n;i++) {
        if (arr[i] % 2 == 0) {
            even += 1;
        }
        else {
            odd += 1;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    return 0;
}