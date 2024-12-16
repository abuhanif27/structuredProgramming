#include <stdio.h>

void transposeMatrix()
{
    int row, col;
    printf("enter row: ");
    scanf("%d", &row);

    printf("enter col: ");
    scanf("%d", &col);

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf(" %d ", matrix[i][j]);

        printf("\n");
    }

    //  transpose logic
    int transposeMatrix[col][row];
    for (int i = 0; i < col; i++)
        for (int j = 0; j < row; j++)
            transposeMatrix[i][j] = matrix[j][i];

    printf("\n");

    // print
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
            printf(" %d ", transposeMatrix[i][j]);

        printf("\n");
    }
}
