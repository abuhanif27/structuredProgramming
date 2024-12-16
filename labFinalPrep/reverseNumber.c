#include <stdio.h>

int reverse(int number)
{
    int rev = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        number = number / 10;
        rev = rev * 10 + lastDigit;
    }
    return rev;
}

void test()
{
    int number;
    printf("Enter a number to see reverse: ");
    scanf("%d", &number);

    int reverseFormat = reverse(number);
    printf("The Reverse number of %d is %d\n", number, reverseFormat);
}