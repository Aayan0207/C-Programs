#include <stdio.h>

//Temperature Conversion Table

float fahrenheit(float temp) {
    return (temp * 9 / 5) + 32;
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    float temps[n];
    for (int i = 0; i < n; i++) {
        printf("Enter temperature %d: ", i + 1);
        scanf("%f", &temps[i]);
    }
    printf("------------------------\n");
    printf("| Celsius | Fahrenheit |\n");
    printf("------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %.2f   |\t%.2f  |\n", temps[i], fahrenheit(temps[i]));
    }
    printf("------------------------\n");
    return 0;
}