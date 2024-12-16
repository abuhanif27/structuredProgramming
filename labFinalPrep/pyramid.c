#include <stdio.h>
// column need  = 2*n -1
//  pyramid logic => n-(row-1) to n+(row-1)
// loop counter should not start with 0 . if start with 0 then you wil miss 1 row and one col

void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void test()
{
    int n;
    printf("Enter pyramid row's size?: ");
    scanf("%d", &n);
    pyramid(n);
}