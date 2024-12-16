#include <stdio.h>

int sumOfFirstAndLastDigits(int digits)
{
    if (digits < 10)
        return digits;

    int lastDigit = digits % 10;
    while (digits >= 10)
        digits = digits / 10;

    int firstDigit = digits;

    return firstDigit + lastDigit;
}

void test()
{
    int digit;
    printf("Enter a digit: ");
    scanf("%d", &digit);
    int sum = sumOfFirstAndLastDigits(digit);

    printf("Sum of first and last digit is : %d\n", sum);
}