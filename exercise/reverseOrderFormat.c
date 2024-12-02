#include <stdio.h>

void reverseOrderFormat(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i + 1; j++)
            printf("%d ", i);
        printf("\n");
    }

}