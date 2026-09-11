/* Question: Ek program likhein jo pointers ka use karke do matrices ko multiply kare. */

#include <stdio.h>
#define ROW 3
#define COL 3

// Function declarations
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);

int main() {
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int product[ROW][COL];

    printf("Enter elements in the first matrix of size %dx%d:\n", ROW, COL);
    matrixInput(mat1);

    printf("Enter elements in the second matrix of size %dx%d:\n", ROW, COL);
    matrixInput(mat2);

    matrixMultiply(mat1, mat2, product);

    printf("Product of both matrices is:\n");
    matrixPrint(product);

    return 0;
}

// Pointers ka use karke matrix me elements input karne ke liye function
void matrixInput(int mat[][COL]) {
    for (int row = 0; row < ROW; row++) {
        for (int col = 0; col < COL; col++) {
            scanf("%d", (*(mat + row) + col));
        }
    }
}

// Pointers ka use karke matrix me elements print karne ke liye function
void matrixPrint(int mat[][COL]) {
    for (int row = 0; row < ROW; row++) {
        for (int col = 0; col < COL; col++) {
            printf("%d ", *(*(mat + row) + col));
        }
        printf("\n");
    }
}

// Pointers ka use karke do matrices ko multiply karne ke liye function
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
