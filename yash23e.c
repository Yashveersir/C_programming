#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of row = ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}