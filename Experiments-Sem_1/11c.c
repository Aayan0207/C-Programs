#include <stdio.h>

int main() {
    char* names[] = { "Aayan","Khan","Amity","University" };
    for (int i = 0; i < 4;i++) {
        printf("%s ", *(names + i));
    }
    return 0;
}