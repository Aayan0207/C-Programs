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
    int decimal_num;
    int choice;
    char hexal_num[100], octal_num[100], binary_num[100]; //Change back to int and flag input upo validation  if found inaccurate
    printf("\t\tWelcome to the Number System Convertor\n");
    printf("Choose type of number to input: \n");
    printf("1. Decimal\n");
    printf("2. Binary\n");
    printf("3. Octal\n");
    printf("4. Hexadecimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            printf("Enter decimal number:");
            scanf("%d", &decimal_num);
            break;
        case 2:
            printf("Enter binary number:");
            scanf(" %[01]", binary_num);
            printf("Binary: %s", binary_num);
            break;
        case 3:
            printf("Enter octal number:");
            scanf(" %[0-7]", &octal_num);
            printf("Octal: %s", octal_num);
            break;
        case 4:
            printf("Enter hexadecimal number:");
            scanf(" %[0-9A-F]", hexal_num);
            printf("Hexal: %s", hexal_num);
            break;
    }

    return 0;
}