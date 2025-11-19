#include <stdio.h>
#define PRINT_VAL(x) printf("The value of "#x": %s\n", x)

//Macro Expansion
int main() {
    char name[10] = "Aayan";
    PRINT_VAL(name);
    return 0;
}
