#include <stdio.h>

//Counter of Elements in Array
int main() {
    int arr[100], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    int range = max - min + 1;
    int counter[range];
    for (int i = 0; i <= range; i++) {
        counter[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        counter[arr[i] - min]++;
    }
    printf("Frequency of elements: \n");
    for (int i = 0; i < n; i++) {
        int index = arr[i] - min;
        if (counter[index] != 0) {
            printf("%d occured %d times\n", arr[i], counter[index]);
            counter[index] = 0;
        }
    }
    return 0;
}