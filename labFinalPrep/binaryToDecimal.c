#include <stdio.h>
#include <math.h>

void binaryToDecimal(int binary)

{
    int count = 0;
    int arr[32];
    int decimal = 0;

    while (binary > 0)
    {
        int digit = binary % 10;
        arr[count++] = digit;
        binary /= 10;
    }

    int reverseArray[count];
    int j = 0;
    for (int i = count - 1; i >= 0; i--)
        reverseArray[j++] = arr[i];

    reverseArray[j] = '\0';

    for (int i = 0; i < count; i++)
        printf(" %d ", reverseArray[i]);

    for (int i = 0; i < count; i++)
        decimal += arr[i] * pow(2, i);

    printf("Decimal number is : %d\n", decimal);
}