#include <math.h>
#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

void binaryToDecimal(void) {
    printf("How many bits do you want? ");
    int bits;
    scanf("%d", &bits);
    int binaryArray[bits];

    printf("Enter the binary number: ");
    for (int i = 0; i < bits; i++) {
        scanf("%d", &binaryArray[i]);
    }

    int decimal = 0;
    int exp = bits - 1;
    for (int i = 0; i < bits; i++) {
        decimal += binaryArray[i] * power(2, exp);
        exp--;
    }

    printf("The decimal number is: %d\n", decimal);
}
