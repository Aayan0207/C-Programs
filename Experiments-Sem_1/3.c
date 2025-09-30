#include <stdio.h>
#include <string.h>

void dec_bin(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }
    int binary[32], i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int bin_dec(long long bnum) {
    int dnum = 0, base = 1, remainder;
    while (bnum > 0) {
        remainder = bnum % 10;
        dnum += remainder * base;
        bnum /= 10;
        base *= 2;
    }
    return dnum;
}

int oct_dec(int onum) {
    int dnum = 0, base = 1, remainder;
    while (onum > 0) {
        remainder = onum % 10;
        dnum += remainder * base;
        onum /= 10;
        base *= 8;
    }
    return dnum;
}

int hex_dec(char hnum[]) {
    int dnum = 0, base = 1, remainder;
    for (int i = strlen(hnum) - 1; i >= 0; i--) {
        if (hnum[i] == 'A' || hnum[i] == 'a') {
            remainder = 10;
        }
        else if (hnum[i] == 'B' || hnum[i] == 'b') {
            remainder = 11;
        }
        else if (hnum[i] == 'C' || hnum[i] == 'c') {
            remainder = 12;
        }
        else if (hnum[i] == 'D' || hnum[i] == 'd') {
            remainder = 13;
        }
        else if (hnum[i] == 'E' || hnum[i] == 'e') {
            remainder = 14;
        }
        else if (hnum[i] == 'F' || hnum[i] == 'f') {
            remainder = 15;
        }
        else {
            remainder = hnum[i] - '0';
        }
        dnum += remainder * base;
        base *= 16;
    }
    return dnum;
}

int main() {
    int decimal_num, octal_num, choice, convert, valid = 0;
    long long binary_num;
    char hexal_num[100];
    printf("\t\tWelcome to the Number System Convertor\n");
    printf("Choose type of number to input: \n");
    printf("1. Decimal\n");
    printf("2. Binary\n");
    printf("3. Octal\n");
    printf("4. Hexadecimal\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
        case 1:
            printf("Enter decimal number: ");
            scanf("%d", &decimal_num);
            break;
        case 2:
            printf("Enter binary number: ");
            scanf("%lld", &binary_num);
            break;
        case 3:
            printf("Enter octal number: ");
            scanf("%d", &octal_num);
            break;
        case 4:
            printf("Enter hexadecimal number: ");
            scanf("%s", hexal_num);
            break;
    }

    printf("\nConvert number to: \n");
    printf("1. Decimal\n");
    printf("2. Binary\n");
    printf("3. Octal\n");
    printf("4. Hexadecimal\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &convert);
    printf("\n");

    switch (choice) {
        case 1:
            switch (convert) {
                case 1:
                    printf("Decimal: %d", decimal_num);
                    break;
                case 2:
                    printf("Binary: ");
                    dec_bin(decimal_num);
                    break;
                case 3:
                    printf("Octal: %o", decimal_num);
                    break;
                case 4:
                    printf("Hexadecimal: %x", decimal_num);
                    break;
            }
            break;
        case 2:
            switch (convert) {
                case 1:
                    printf("Decimal: %d", bin_dec(binary_num));
                    break;
                case 2:
                    printf("Binary: %lld", binary_num);
                    break;
                case 3:
                    printf("Octal: %o", bin_dec(binary_num));
                    break;
                case 4:
                    printf("Hexadecimal: %x", bin_dec(binary_num));
                    break;
            }
            break;
        case 3:
            switch (convert) {
                case 1:
                    printf("Decimal: %d", oct_dec(octal_num));
                    break;
                case 2:
                    printf("Binary: ");
                    dec_bin(oct_dec(octal_num));
                    break;
                case 3:
                    printf("Octal: %o", oct_dec(octal_num));
                    break;
                case 4:
                    printf("Hexadecimal: %x", oct_dec(octal_num));
                    break;
            }
            break;
        case 4:
            switch (convert) {
                case 1:
                    printf("Decimal: %d", hex_dec(hexal_num));
                    break;
                case 2:
                    printf("Binary: ");
                    dec_bin(hex_dec(hexal_num));
                    break;
                case 3:
                    printf("Octal: %o", hex_dec(hexal_num));
                    break;
                case 4:
                    printf("Hexadecimal: %x", hex_dec(hexal_num));
                    break;
            }
            break;
    }
    printf("\n");
    return 0;
}