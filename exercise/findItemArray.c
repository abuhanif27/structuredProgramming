#include <stdio.h>

void findItemArray()
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

    int pos = -1;
    int target;
    printf("What integer you want to find?: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            pos = i;
            printf("%d found in position %d\n", target, i);
            break;
        }
    }

    if (pos == -1)
        printf("%d not found in array\n", target);
}