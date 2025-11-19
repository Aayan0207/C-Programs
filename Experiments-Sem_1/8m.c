#include <stdio.h>
#define PROJECT "Combining Predefined and User-Defined Macros"
#define VERSION "v6.1.1"

int main() {
    printf("Project: %s\n", PROJECT);
    printf("Version: %s\n", VERSION);
    printf("Compiled on: %s at %s\n", __DATE__, __TIME__);
    printf("Source File: %s (line %d)\n", __FILE__, __LINE__);
    return 0;
}
