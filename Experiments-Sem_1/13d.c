#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee e;
    int n;

    FILE* file = fopen("employees.dat", "wb+");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter ID: ");
        scanf("%d", &e.id);
        printf("Enter Name: ");
        scanf("%s", e.name);
        printf("Enter Salary: ");
        scanf("%f", &e.salary);
        fwrite(&e, sizeof(e), 1, file);
    }
    fflush(file);
    fseek(file, 0, SEEK_SET);
    printf("\n\t___Employee Records___\n");
    while (fread(&e, sizeof(e), 1, file)) {
        printf("ID: %d  Name: %s  Salary: %.2f\n", e.id, e.name, e.salary);
    }

    fclose(file);
    return 0;
}