/* Question: Ek program likhein jo matrix ka transpose nikaale aur check kare ki kya wo symmetric hai. */

#include <stdio.h>
#define max 50

int main(void)
{
    int a[max][max], b[max][max];
    int arow, acolumn;
    int i, j, is_symmetric = 1;
    
    printf("Enter number of rows and column of matrix a : ");
    scanf("%d%d", &arow, &acolumn);
    printf("Enter the elements of matrix a\n");
    
    // Matrix A read karein
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < acolumn; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Transpose of matrix a is \n");
    
    // Transpose Matrix B calculate aur print karein
    for (i = 0; i < acolumn; i++)
    {
        for (j = 0; j < arow; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    // Symmetric hai ya nahi check karein
    if (arow == acolumn) {
        for (i = 0; i < arow; i++) {
            for (j = 0; j < acolumn; j++) {
                if(a[i][j] != b[i][j]) {
                    is_symmetric = 0;
                    break;
                }
            }
        }
    } else {
        is_symmetric = 0;
    }
    
    if (is_symmetric)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");
        
    return 0;
}
