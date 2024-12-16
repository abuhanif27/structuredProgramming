#include <stdio.h>

int isPrime(int number)
{
    if (number < 1)
        return -1;
    if (number == 1)
        return 0;
    if (number == 2)
        return 1;

    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return 0;

    return 1;
}

void test()
{
    int number;
    printf("Enter a number to check it is prime or not? ");
    scanf("%d", &number);

    int prime = isPrime(number);
    if (prime == -1)
        printf("%d is an invalid number try to input greater than 0\n", number);
    else if (prime == 0)
        printf("%d is not a prime number\n", number);
    else
        printf("%d is a prime number!\n", number);
}