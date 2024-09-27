#include <stdio.h>

int main(void) 
{
    int i, j, k = 0, rows, n;
    printf("Number of rows : ");
    scanf("%d", &rows);
    n = rows / 2;
    for (i = 0; i < rows; i++)
    {
        i < (n + 1) ? k++ : k--;
        for (j = 0; j < rows; j++)
        {
            if (j <= (n + 1 - k) || j >= (n - 1 + k))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            } 
        }
        printf("\n");
    }
    return 0;
}
