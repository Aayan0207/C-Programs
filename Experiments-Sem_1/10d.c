#include <stdio.h>

//Sum of array elements
int sum(int arr[], int n) {
    int total;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter num %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Sum: %d", sum(arr, n));
}