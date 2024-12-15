    #include <stdio.h>

    void matrix_multiplication()
    {
        int rowA, colA, rowB, colB;
        printf("Enter Row size of Array A: ");
        scanf("%d", &rowA);

        printf("Enter Column size of Array A: ");
        scanf("%d", &colA);

        printf("Enter Row size of Array B: ");
        scanf("%d", &rowB);

        printf("Enter Column size of Array B: ");
        scanf("%d", &colB);

        int arrayA[rowA][colA];
        int arrayB[rowB][colB];

        if (colA == rowB)
        {
            // input array a
            for (int i = 0; i < rowA; i++)
            {
                for (int j = 0; j < colA; j++)
                {
                    printf("Enter Data for Array A: (%d, %d): ", i, j);
                    scanf("%d", &arrayA[i][j]);
                }
                printf("\n");
            }
            // input array b
            for (int i = 0; i < rowB; i++)
            {
                for (int j = 0; j < colB; j++)
                {
                    printf("Enter Data for Array B: (%d, %d): ", i, j);
                    scanf("%d", &arrayB[i][j]);
                }
                printf("\n");
            }
            // result array
            int resultArray[rowA][colB];

            for (int i = 0; i < rowA; i++)
            {
                for (int j = 0; j < colB; j++)
                {
                    resultArray[i][j] = 0;
                    for (int k = 0; k < colA; k++)
                    {
                        resultArray[i][j] += arrayA[i][k] * arrayB[k][j];
                    }
                }
            }

            // PRINTING
            printf("Array A is:\n");
            for (int i = 0; i < rowA; i++)
            {
                for (int j = 0; j < colA; j++)
                {
                    printf(" %d ", arrayA[i][j]);
                }
                printf("\n");
            }

            printf("\nArray B is:\n");
            for (int i = 0; i < rowB; i++)
            {
                for (int j = 0; j < colB; j++)
                {
                    printf(" %d ", arrayB[i][j]);
                }
                printf("\n");
            }

            printf("\n\n Multiplication Matrix is:\n");
            for (int i = 0; i < rowA; i++)
            {
                for (int j = 0; j < colB; j++)
                {
                    printf(" %d ", resultArray[i][j]);
                }
                printf("\n");
            }
        }
        else
            printf("Multiplication Matrix Not Possible\n");
    }
