#include <stdio.h>

int main() {
    char n;
    int c = 0, w = 0, l = 0;

    FILE* file = fopen("sample.txt", "r");

    while ((n = fgetc(file)) != EOF) {
        c++;

        if (n == ' ')
            w++;

        if (n == '!' || n=='.' || n=='?')
            l++;
    }
    w++;
    fclose(file);

    printf("Characters: %d\n", c);
    printf("Words: %d\n", w);
    printf("Lines: %d\n", l);

    return 0;
}
