#include <stdio.h>

//Input and display elements in an array
int main() {
    int n, i, arr[100];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
