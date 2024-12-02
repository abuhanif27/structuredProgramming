#include <stdio.h>

void frequencyArrayCheck(int arr[], int size) {
    int freq[100] = {0}; // Assuming the maximum element is less than 100

    // Count the frequency of each element
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Display the frequency of each element
    for (int i = 0; i < 100; i++) {
        if (freq[i] != 0) {
            printf("%d found: %d times\n", i, freq[i]);
        }
    }
}

void runArrayFrequencyTest() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements in the array
    printf("Enter %d elements (0 to 99):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to check frequency
    frequencyArrayCheck(arr, n);
}
