#include <stdio.h>

// Function to calculate factorial
long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

void sumSeries(int n) {
    long sum = 0;

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }

    // Display the result
    printf("The sum of the series 1! + 2! + 3! + ... + %d! is: %ld\n", n, sum);

}