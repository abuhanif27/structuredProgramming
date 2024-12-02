#include <stdio.h>

void frequencyDigitCheck(int digits) {
    int freq[10] = {0};
    while (digits != 0) {
        int lastDigit = digits % 10;
        freq[lastDigit]++;
        digits = digits / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d found: %d times\n", i, freq[i]);
        }
    }
}