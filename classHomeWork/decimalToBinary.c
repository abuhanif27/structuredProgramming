#include <stdio.h>

void decimalToBinary() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    int i = 0;
    int resultArr[32];
    int originalDecimal = decimal;

    while (decimal != 0) {
        resultArr[i++] = decimal % 2;
        decimal = decimal / 2;
    }
    resultArr[i] = -1;

    int count = 0;
    int array_length = sizeof(resultArr) / sizeof(resultArr[0]);
    for (int i = 0; i < array_length; i++) {
        if (resultArr[i] == -1)
            break;
        count++;
    }
    int msb_array[count];
    for (int i = 0; i < count; i++) {
        msb_array[i] = resultArr[i];
    }


    int x = 0;

    int lsb_to_msbArr[count];

    for (int i = count - 1; i >= 0; i--) {
        lsb_to_msbArr[x++] = msb_array[i];
    }

    printf("The binary number of %d is: ",originalDecimal);
    for (int i = 0; i < count; i++) {
        printf("%d", lsb_to_msbArr[i]);
    }
}
