#include <stdio.h>

void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int alreadySorted = 1;
        for (int j = 1; j < n - i; j++)
            if (arr[j] > arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                alreadySorted = 0;
            }
        if (alreadySorted)
            break;
    }
}

void test()
{
    int arr[] = {1, 9, 10, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Your Array is: ");

    for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);

    printf("\n");

    sort(arr, n);
    int firstHighest = arr[0];
    int secondHighest = arr[1];
    int thirdHighest = arr[2];
    printf("\nFirst highest is : %d\n", firstHighest);
    printf("Second Highest is : %d\n", secondHighest);
    printf("Third Highest is : %d\n", thirdHighest);
}