#include <stdio.h>
#include <string.h>

//Union to Store Student Details
int main() {
    union Student {
        int roll;
        char name[20];
        float marks;
    };
    union Student s;
    printf("\n--- Student Details ---\n");
    s.roll = 5054;
    printf("Roll: %d\n", s.roll);
    strcpy(s.name, "Aayan Khan");
    printf("Name: %s\n", s.name);
    s.marks = 29.5;
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
