#include <stdio.h>

//Counter of Elements in Array
int main() {
    int arr[100], counter[101], n, target;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        counter[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        counter[arr[i]]++;
    }
    printf("Frequency of elements: \n");
    for (int i = 0; i < n; i++) {
        if (counter[arr[i]] != 0) {
            printf("%d occured %d times\n", arr[i], counter[arr[i]]);
            counter[arr[i]] = 0;
        }
    }
    return 0;
}