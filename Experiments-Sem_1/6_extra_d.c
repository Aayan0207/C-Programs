#include <stdio.h>

//Use if to check whether a year is a leap year
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            printf("Leap year");
        }
        else {
            printf("Non-Leap year");
        }
    }
    else if (year % 4 == 0) {
        printf("Leap year");
    }
    else {
        printf("Non-Leap year");
    }
    return 0;
}