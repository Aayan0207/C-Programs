#include <stdio.h>

//Create a grading system using if-else if ladder (A,B,C,D,F)

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    printf("Your grade is: ");
    if (marks >= 90) {
        printf("A");
    }
    else if (marks >= 80) {
        printf("B");
    }
    else if (marks >= 70) {
        printf("C");
    }
    else if (marks >= 60) {
        printf("D");
    }
    else {
        printf("F");
    }
    return 0;
}