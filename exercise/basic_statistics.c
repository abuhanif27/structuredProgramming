#include <stdio.h>
#include <math.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

double calculateMean(int arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}

double calculateMedian(int arr[], int size) {
    sortArray(arr, size);
    if (size % 2 == 0)
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    return arr[size / 2];
}


double calculateStandardDeviation(int arr[], int size) {
    double mean = calculateMean(arr, size);
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += pow(arr[i] - mean, 2);
    return sqrt(sum / size);
}


void staticWizard(int arr[], int size) {
    double mean = calculateMean(arr, size);
    double median = calculateMedian(arr, size);
    double standardDeviation = calculateStandardDeviation(arr, size);

    printf("\nMean = %.2f", mean);
    printf("\nMedian = %.2f", median);
    printf("\nStandard Deviation = %.2f\n", standardDeviation);
}
