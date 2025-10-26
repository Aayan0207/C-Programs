#include <stdio.h>

//Switch-Case Statement

int main() {
    int choice;
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);
    printf("You've selected option ");
    switch (choice) {
        case 1:
            printf("1: Hello!");
            break;
        case 2:
            printf("2: Hi!");
            break;
        case 3:
            printf("3: Hey!");
            break;
        default:
            printf("None: Inavlid choice.");
            break;
    }
    return 0;
}