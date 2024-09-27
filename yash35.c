#include <stdio.h>
#define max 50
int main(void)
{
    char choice, A, B, C ;
    printf("---Menu---\n");
    printf("A>Addition of two matrix\n");
    printf("B>Subtraction of two matrix\n");
    printf("C>Multiplicaton of two matrix\n");

    printf("Enter your choice : ");
    scanf("%c", &choice);
    int a[max][max], b[max][max], sum[max][max], sub[max][max], prod[max][max], add = 0;
    int arow, acolumn, brow, bcolumn;
    int i, j, k;
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
    printf("Enter number of rows and column of matrix b : ");
    scanf("%d%d", &brow, &bcolumn);
    printf("Enter the elements of matrix b\n");
    for (i = 0; i < brow; i++)
    {
        for (j = 0; j < bcolumn; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    switch (choice)
    {
    case 'A':
        if (arow != brow && acolumn != bcolumn)
        {
            printf("Not possible to do addition");
        }
        else
            for (i = 0; i < arow; i++)
            {
                for (j = 0; j < bcolumn; j++)
                {
                    sum[i][j] = a[i][j] + b[i][j];
                }
            }
        printf("Resultant Matrix\n");
        for (i = 0; i < arow; i++)
        {
            for (j = 0; j < bcolumn; j++)
            {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
        break;
    case 'B':
        if (arow != brow && acolumn != bcolumn)
        {
            printf("Not possible to do subtraction");
        }
        else
            for (i = 0; i < brow; i++)
            {
                for (j = 0; j < bcolumn; j++)
                {
                    sub[i][j] = a[i][j] - b[i][j];
                }
            }
        printf("Resultant Matrix\n");
        for (i = 0; i < arow; i++)
        {
            for (j = 0; j < bcolumn; j++)
            {
                printf("%d\t", sub[i][j]);
            }
            printf("\n");
        }
        break;
    case 'C':
        if (acolumn != brow)
            printf("Muliplication is not possible");
        else
            for (i = 0; i < arow; i++)
            {
                for (j = 0; j < bcolumn; j++)
                {
                    for (k = 0; k < brow; k++)
                    {
                        add += a[i][k] * b[k][j];
                    }
                    prod[i][j] = add;
                    add = 0;
                }
            }
        printf("Resultant Matrix\n");
        for (i = 0; i < arow; i++)
        {
            for (j = 0; j < bcolumn; j++)
            {
                printf("%d\t", prod[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("Menu not found");
    }

    return 0;
}