#include <stdio.h>

void repeatDigit()
{
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value of index (%d): ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == array[j])
                count++;
        }
        printf("%d repeats %d\n", i, count);
    }

}