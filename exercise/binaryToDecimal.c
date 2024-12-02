#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1; // 2^0 initially

    while (binary > 0) {
        int lastDigit = binary % 10; // Get the last digit (0 or 1)
        decimal += lastDigit * base; // Update the decimal number
        base = base * 2;             // Increase the power of 2
        binary = binary / 10;        // Remove the last digit
    }

    return decimal;
}

