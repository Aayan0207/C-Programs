// #include <stdio.h>


// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main() {
//     int i = 2, j = 3, k, l;
//     float a,b;
//     k = i/j*j;
//     l = j/i*i;
//     a = i/j*j;
//     b = j/i*i;
//     printf("%d %d %f %f\n", k,l,a,b);
//     return 0;
// }

// // a = (condition) ? (if condition is true) : (if condition is false)
// // int main() {
// //     int length = 1189, width = 841;
// //     for (int i = 0; i <= 8; i++) {
// //         printf("A%d: %d mm x %d mm\n", i, length, width);
// //         int tmp = length;
// //         length = width;
// //         width = tmp / 2;
// //     }
// // }
#include <stdio.h>

int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    unsigned int bits = *(unsigned int*)&num; 

    unsigned int sign = (bits >> 31) & 1;
    unsigned int exponent = (bits >> 23) & 0xFF;
    unsigned int mantissa = bits & 0x7FFFFF;

    printf("Sign     = %u\n", sign);
    printf("Exponent = ");
    for (int i = 7; i >= 0; i--) {
        printf("%u", (exponent >> i) & 1);
    }
    printf("\nMantissa = ");
    for (int i = 22; i >= 0; i--) {
        printf("%u", (mantissa >> i) & 1);
    }
    return 0;
}
