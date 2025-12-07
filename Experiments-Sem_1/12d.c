#include <stdio.h>
#include <string.h>

//Nested Structures
int main() {
    struct Address {
        char city[20];
        int pincode;
    };

    struct Student {
        int roll;
        char name[20];
        struct Address addr;
    };

    struct Student s;

    s.roll = 5054;
    strcpy(s.name, "Aayan Khan");
    strcpy(s.addr.city, "Faridabad");
    s.addr.pincode = 121003;
    printf("\n____Student Details____\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.addr.city);
    printf("Pincode: %d\n", s.addr.pincode);

    return 0;

}
