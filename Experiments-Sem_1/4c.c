#include <stdio.h>

int main() {
    char name[32];
    float balance;
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter balance: ");
    scanf("%f", &balance);
    printf("---------------------\n");
    printf("| Holder | Balance  |\n");
    printf("---------------------\n");
    printf("| %s  | %8.2f |\n", name, balance);
    printf("| %s  | %-8.2f |\n", name, balance);
    printf("---------------------\n");
    return 0;
}