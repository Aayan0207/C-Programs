#include <stdio.h>
#include <time.h>

//Auto vs Register Variable
int main() {
    clock_t start, end;

    int a = 0;      // Using auto variable

    start = clock();
    for (unsigned long i = 0; i < 1000000000; i++) {
        a++;
    }
    end = clock();
    printf("Auto variable time: %.3f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    register int r = 0; // Using register variable

    start = clock();
    for (unsigned long i = 0; i < 1000000000; i++) {
        r++;
    }
    end = clock();
    printf("Register variable time: %.3f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}

