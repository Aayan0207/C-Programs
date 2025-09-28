#include <stdio.h>
#include <math.h>

void binary(int num)
{
    if (num == 0)
    {
        printf("0\n");
        return;
    }
    int binary[32], i = 0;
    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int decimal(long long bnum)
{
    int dnum = 0, n = 0, remainder;
    while (bnum > 0)
    {
        remainder = bnum % 10;
        dnum += remainder * pow(2, n);
        bnum /= 10;
        n += 1;
    }
    return dnum;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Decimal: %d\n", num);
    printf("Binary: ");
    binary(num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %x\n\n", num);

    long long bnum;
    printf("Enter binary number: ");
    scanf("%lld", &bnum);
    printf("Decimal Equivalent: %d", decimal(bnum));
}