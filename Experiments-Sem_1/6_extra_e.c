#include <stdio.h>

//Write a program to check vowel or consonant using switch-case
int main() {
    char c;
    printf("Enter lowercase character: ");
    scanf("%c", &c);
    switch (c) {
        case 'a':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
            break;
    }
    return 0;
}