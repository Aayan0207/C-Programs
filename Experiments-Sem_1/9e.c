#include <stdio.h>

//Array Reversal (in-place)
int main() {
    int arr[100], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int L = 0, R = n - 1;
    while (L < R) {
        int tmp = arr[L];
        arr[L] = arr[R];
        arr[R] = tmp;
        L++;
        R--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}