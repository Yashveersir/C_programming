#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of row = ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*(n-1) - (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}