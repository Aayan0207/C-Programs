#include <stdio.h>

int main() {
    char chars[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &chars[i]);
    }
    printf("-------------------------\n");
    printf("| Char  | ASCII Value   |\n");
    printf("-------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("| %c\t|%8d\t|\n", chars[i], (int)chars[i]);
    }
    printf("-------------------------\n");
    return 0;
}