#include <stdio.h>

void decimalToBinary(int decimal)
{
    if (decimal < 0)
    {
        printf("Invalid decimal to convert binary!\n");
        return;
    }

    int originalDecimal = decimal;
    int arr[32];
    int count = 0;
    while (decimal > 0)
    {
        int remainder = decimal % 2;
        arr[count++] = remainder;
        decimal /= 2;
    }
    arr[count] = '\0';

    // reverse remainder -> LSB to MSB
    printf("%d's Binary form is: ", originalDecimal);
    for (int i = count - 1; i >= 0; i--)
        printf(" %d ", arr[i]);
    printf("\n");
}

void test()
{
    int decimal;
    printf("Enter Decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);
}