#include <stdio.h>

#define MAX_SIZE 10 // Define the maximum size of the matrix

// Function to input the matrix
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j); // Prompt for each element
            scanf("%d", &matrix[i][j]); // Store input in the matrix
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("\nMatrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]); // Print each element
        }
        printf("\n"); // New line after each row
    }
}

// Function to calculate the transpose of the matrix
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int transpose[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    // Swap rows with columns to find the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j]; // Assign values to transpose
        }
    }
}

// Main function
void transposeMatrixTest() {
    int matrix[MAX_SIZE][MAX_SIZE]; // Original matrix
    int transpose[MAX_SIZE][MAX_SIZE]; // Transposed matrix
    int rows, cols; // Variables to store the number of rows and columns

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input the elements of the matrix
    inputMatrix(matrix, rows, cols);

    // Print the original matrix
    printMatrix(matrix, rows, cols);

    // Calculate the transpose of the matrix
    transposeMatrix(matrix, transpose, rows, cols);

    // Print the transposed matrix
    printMatrix(transpose, cols, rows); // Rows and columns are swapped

}
