#include <stdio.h>

void firstAndLastDigitSum(int num) {
    int number, firstDigit, lastDigit, sum;



    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    // Calculate the sum
    sum = firstDigit + lastDigit;

    // Display the result
    printf("Sum of first and last digit: %d\n", sum);

}