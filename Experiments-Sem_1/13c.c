#include <stdio.h>

int main() {
    char n;

    FILE *reader = fopen("sample.txt", "r");
    FILE *writer = fopen("copy.txt", "w");

    while((n = fgetc(reader)) != EOF) {
        fputc(n, writer);
    }

    printf("File copied successfully.\n");

    fclose(reader);
    fclose(writer);

    return 0;
}
