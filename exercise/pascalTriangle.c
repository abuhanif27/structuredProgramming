#include <stdio.h>

long long binomialCoeff(int n, int k) {
    long long res = 1;
    if (k > n - k) k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void printPascalTriangle(int n) {
    for (int line = 0; line < n; line++) {
        for (int space = 0; space < n - line - 1; space++) {
            printf("  ");
        }
        for (int i = 0; i <= line; i++) {
            printf("%3lld ", binomialCoeff(line, i));
        }
        printf("\n");
    }
}

