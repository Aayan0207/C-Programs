#include <stdio.h>

int main() {
    char name[32], subject_1[16], subject_2[16], subject_3[16], subject_4[16], subject_5[16];
    int roll_no;
    float marks_1, marks_2, marks_3, marks_4, marks_5;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter roll no: ");
    scanf("%d", &roll_no);
    printf("Enter subject 1: ");
    scanf("%s", subject_1);
    printf("Enter marks in subject 1: ");
    scanf("%f", &marks_1);
    printf("Enter subject 2: ");
    scanf("%s", subject_2);
    printf("Enter marks in subject 2: ");
    scanf("%f", &marks_2);
    printf("Enter subject 3: ");
    scanf("%s", subject_3);
    printf("Enter marks in subject 3: ");
    scanf("%f", &marks_3);
    printf("Enter subject 4: ");
    scanf("%s", subject_4);
    printf("Enter marks in subject 4: ");
    scanf("%f", &marks_4);
    printf("Enter subject 5: ");
    scanf("%s", subject_5);
    printf("Enter marks in subject 5: ");
    scanf("%f", &marks_5);
    printf("\n-------------------------\n");
    printf("|\t%s\t\t|\n", name);
    printf("|\t(%d)\t\t|", roll_no);
    printf("\n-------------------------\n");
    printf("|Subject\t|Marks\t|");
    printf("\n-------------------------\n");
    printf("|%s\t|%.2f\t|\n", subject_1, marks_1);
    printf("|%s|%.2f\t|\n", subject_2, marks_2);
    printf("|%s\t|%.2f\t|\n", subject_3, marks_3);
    printf("|%s\t|%.2f\t|\n", subject_4, marks_4);
    printf("|%s\t|%.2f\t|\n", subject_5, marks_5);
    printf("-------------------------\n");
    return 0;
}