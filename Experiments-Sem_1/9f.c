#include <stdio.h>

//Linear Search
int main() {
    int arr[100], n, target;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("%d found at index %d", target, i);
            return 0;
        }
    }
    printf("%d not found in array", target);
    return 0;
}