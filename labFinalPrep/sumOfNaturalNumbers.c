#include <stdio.h>

void approachOne(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum of nuatural numbers by approach one: %d\n", sum);
}

void approachTwo(int n)
{
    int sum = (n * (n + 1)) / 2;
    printf("Sum of nuatural numbers by approach two: %d\n", sum);
}

void test()
{
    int n;
    printf("how many natural numbers you want? ");
    scanf("%d", &n);

    approachOne(n);
    approachTwo(n);
}