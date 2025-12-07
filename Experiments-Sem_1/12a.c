#include <stdio.h>
#include <string.h>

//Structure to Store Student Details
int main() {
    struct Student {
        int roll;
        char name[20];
        float marks;
    };
    struct Student s;
    s.roll = 5054;
    strcpy(s.name, "Aayan Khan");
    s.marks = 29.5;
    printf("\n--- Student Details ---\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
