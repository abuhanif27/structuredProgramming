#include <stdio.h>

void evenArr() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n], subArr[n], subIndex = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter value of index (%d): ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            subArr[subIndex++] = arr[i];
        }
    }

    printf("\n");

    printf("Sub-array of even numbers: ");
    for (int i = 0; i < subIndex; i++) {
        printf("%d ", subArr[i]);
    }

}