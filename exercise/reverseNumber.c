#include <stdio.h>

void reverseNumber(int number) {
    int reverse=0;
    int target = number;

    while (number != 0) {
        int lastDigit = number % 10;
        reverse = reverse * 10 + lastDigit;
        number = number / 10;
    }
    printf("%d reverse is %d", target, reverse);
}