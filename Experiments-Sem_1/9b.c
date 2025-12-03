#include <stdio.h>

//Sum and average of array elements
int main() {
    int arr[100], n, sum = 0;
    float avg;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n;i++) {
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", avg);
    return 0;
}