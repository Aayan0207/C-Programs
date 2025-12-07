#include <stdio.h>

//Write and Read a text file
int main() {
    char text[100];

    FILE* file = fopen("sample.txt", "w+");

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    fflush(file);
    fseek(file, 0, SEEK_SET);

    printf("\nData read from file:\n");
    fgets(text, sizeof(text), file);
    printf("%s", text);

    fclose(file);
    return 0;
}
