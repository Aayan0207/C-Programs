#include <stdio.h>

//Rotating array
int main() {
    int arr[100], rotated[100], n, k;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter rotations count: ");
    scanf("%d", &k);
    k = k % n;
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    return 0;
}