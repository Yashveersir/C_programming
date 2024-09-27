#include <stdio.h>
#define max 50
int main(void)
{
    int a[max][max], b[max][max];
    int arow, acolumn;
    int i, j;
    printf("Enter number of rows and column of matrix a : ");
    scanf("%d%d", &arow, &acolumn);
    printf("Enter the elements of matrix a\n");
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < acolumn; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of matrix a is \n");
    for (i = 0; i < acolumn; i++)
    {
        for (j = 0; j < arow; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    if (a[i][j] == b[i][j])
        printf("Marix is symmetric");
    else
        printf("Matrix is not symmetic");
    return 0;
}