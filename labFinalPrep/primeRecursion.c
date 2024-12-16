#include <stdio.h>

int isPrime_rec(int number, int divisor)
{
    if (number < 1)
        return -1;
    if (number == 1)
        return 0;
    if (number == 2)
        return 1;
    if (divisor == 1)
        return 1;
    if (number % divisor == 0)
        return 0;

    return isPrime_rec(number, divisor - 1);
}

void test()
{
    int number;
    printf("Enter a number to check it is prime or not? ");
    scanf("%d", &number);

    int prime = isPrime_rec(number, number - 1);
    if (prime == -1)
        printf("%d is an invalid number try to input greater than 0\n", number);
    else if (prime == 0)
        printf("%d is not a prime number\n", number);
    else
        printf("%d is a prime number!\n", number);
}