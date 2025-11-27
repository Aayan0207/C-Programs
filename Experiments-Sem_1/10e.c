#include <stdio.h>

//Menu-driven calculator
int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
int mult(int x, int y) {
    return x * y;
}
int div(int x, int y) {
    return x / y;
}
int mod(int x, int y) {
    return x % y;
}
int power(int x, int y) {
    for (int i = 0; i < y; i++) {
        x *= x;
    }
    return x;
}
int main() {
    int choice, x, y;
    printf("\t Calculator\n");
    printf("\t Menu\n");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Exponentation");
    printf("\n\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enter number 2: ");
    scanf("%d", &y);
    switch (choice) {
        case 1:
            printf("Sum: %d", add(x, y));
            break;
        case 2:
            printf("Difference: %d", sub(x, y));
            break;
        case 3:
            printf("Product: %d", mult(x, y));
            break;
        case 4:
            printf("Quotient: %d", div(x, y));
            break;
        case 5:
            printf("Remainder: %d", mod(x, y));
            break;
        case 6:
            printf("Exponentation: %d", power(x, y));
            break;
    }
    return 0;
}