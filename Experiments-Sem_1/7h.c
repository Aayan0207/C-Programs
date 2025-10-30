#include <stdio.h>
#include <math.h>
//Armstrong number check
int main() {
    int num, n = 0, sum = 0, remainder;
    printf("Enter num: ");
    scanf("%d", &num);
    int tmp = num;
    while (tmp > 0) {
        tmp /= 10;
        n++;
    }
    tmp = num;
    while (tmp > 0) {
        remainder = tmp % 10;
        sum += pow(remainder, n);
        tmp /= 10;
    }
    if (sum == num) {
        printf("Armstrong Number");
    }
    else {
        printf("Not an Armstrong Number");
    }
    return 0;
}