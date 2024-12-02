#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32]; // Array to store binary digits (maximum 32 bits)
    int index = 0; // Index for the binary array

    // Edge case for zero
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[index] = decimal % 2; // Get the remainder (0 or 1)
        decimal = decimal / 2; // Update the decimal number
        index++;
    }

    // Print the binary number in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
