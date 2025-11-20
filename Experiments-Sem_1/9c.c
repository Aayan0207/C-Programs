#include <stdio.h>

//Find maximum and minimum element in an Array
int main() {
    int arr[100], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}