#include <math.h>
#include <stdio.h>


float getMean(int array[], int arrayLength) {
    int sum = 0;
    for (int i = 0; i < arrayLength; i++)
        sum += array[i];

    return (float) sum / arrayLength;
    // I have cast sum to float else int/int type not work for correct float value now float/int it will work
}

float getMedian(int array[], int arrayLength) {
    if (arrayLength % 2 != 0) {
        short mid = arrayLength / 2;
        return array[mid];
    }

    short midL = ((arrayLength - 1) / 2);
    short midR = (midL + 1);
    int sum = array[midL] + array[midR];
    return (float) sum / 2; // return median
}

float getStandardDeviation(int array[], int arrayLength) {
    float mean = getMean(array, arrayLength);
    float diffMean[arrayLength];

    for (int i = 0; i < arrayLength; i++)
        diffMean[i] = array[i] - mean;

    float squareDiff[arrayLength];
    for (int i = 0; i < arrayLength; i++)
        squareDiff[i] = diffMean[i] * diffMean[i];

    float squareDiffSum = 0;
    for (int i = 0; i < arrayLength; i++) {
        squareDiffSum += squareDiff[i];
    }
    float variance = squareDiffSum / arrayLength;
    float standardDeviation = sqrt(variance);
    return standardDeviation;
}

void statistics() {
    int arrayLength;;
    printf("Enter the size of the array: ");
    scanf("%d", &arrayLength);

    int array[arrayLength];
    printf("Enter the array elements: ");
    for (int i = 0; i < arrayLength; i++)
        scanf("%d", &array[i]);

    float mean = getMean(array, arrayLength);
    float median = getMedian(array, arrayLength);
    float standardDeviation = getStandardDeviation(array, arrayLength);

    printf("\n");
    printf("The mean of the array is: %.2f\n", mean);
    printf("The median of the array is: %.2f\n", median);
    printf("The Standard Deviation of the array is: %.2f\n", standardDeviation);
}
