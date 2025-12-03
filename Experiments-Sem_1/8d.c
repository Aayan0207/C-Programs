#include <stdio.h>
int x = 10;
void display();

//Extern Storage Class
//Main file
int main() {
    printf("In main function, x: %d\n", x);
    display();
    return 0;
}
