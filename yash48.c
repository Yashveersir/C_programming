#include <stdio.h>
#define ROW 3
#define COL 3

/* Function declarations */
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);

int main() {
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int product[ROW][COL];

    /* Input elements in matrices */
    printf("Enter elements in the first matrix of size %dx%d:\n", ROW, COL);
    matrixInput(mat1);

    printf("Enter elements in the second matrix of size %dx%d:\n", ROW, COL);
    matrixInput(mat2);

    // Call function to multiply both matrices
    matrixMultiply(mat1, mat2, product);

    // Print the product of both matrices
    printf("Product of both matrices is:\n");
    matrixPrint(product);

    return 0;
}

/* Function to input elements in a matrix from the user */
void matrixInput(int mat[][COL]) {
    for (int row = 0; row < ROW; row++) {
        for (int col = 0; col < COL; col++) {
            scanf("%d", (*(mat + row) + col));
        }
    }
}

/* Function to print elements in a two-dimensional array */
void matrixPrint(int mat[][COL]) {
    for (int row = 0; row < ROW; row++) {
        for (int col = 0; col < COL; col++) {
            printf("%d ", *(*(mat + row) + col));
        }
        printf("\n");
    }
}

/* Function to multiply two matrices */
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]) {
    for (int row = 0; row < ROW; row++) {
        for (int col = 0; col < COL; col++) {
            int sum = 0;
            for (int i = 0; i < COL; i++) {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }
            *(*(res + row) + col) = sum;
        }
    }
}
