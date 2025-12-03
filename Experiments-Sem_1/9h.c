#include <stdio.h>

//Copy one array into another
int main() {
    int arr[100], copy[100], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        copy[i] = arr[i];
    }
    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    return 0;
}