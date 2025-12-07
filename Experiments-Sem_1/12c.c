#include <stdio.h>

//Array of Structures
int main() {
    struct Employee {
        int id;
        char name[20];
        float salary;
    };
    struct Employee emp[2];

    for (int i = 0; i < 2; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n___Employee Details___\n");
    for (int i = 0; i < 2; i++) {
        printf("%d %s %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}

