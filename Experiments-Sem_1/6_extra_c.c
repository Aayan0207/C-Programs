#include <stdio.h>
#include <math.h>

//Write a menu-driven calculator using switch-case.

int main() {
    char another = 'y';
    printf("\tMenu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exponentation\n");
    printf("\n");
    int choice;
    do {
        int num1, num2;
        printf("Enter number 1: ");
        scanf("%d", &num1);
        printf("Enter number 2: ");
        scanf("%d", &num2);
        printf("Choose operation (1-6): ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 6) {
            continue;
        }
        switch (choice) {
            case 1:
                printf("The sum is: %d \n", num1 + num2);
                break;
            case 2:
                printf("The difference is: %d \n", num1 - num2);
                break;
            case 3:
                printf("The product is: %d \n", num1 * num2);
                break;
            case 4:
                printf("The quotient is: %d \n", num1 / num2);
                break;
            case 5:
                printf("The remainder is: %d \n", num1 % num2);
                break;
            case 6:
                printf("The exponentation is: %f \n", pow(num1, num2));
                break;
        }
        printf("Continue operations (y/n)? ");
        scanf(" %c", &another);
    } while (another == 'y');
    return 0;
}