#include <stdio.h>

//Scientific Notation

int main() {
    float num;
    printf("Enter number: ");
    scanf("%f", &num);
    printf("Default format: %f\n", num);
    printf("Scientific format: %e", num);
    return 0;
}