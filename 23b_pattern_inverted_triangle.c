/* Question: Ek program likhein jo asterisks (*) ka use karke ulta (inverted) triangle pattern print kare. */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of row = ");
    scanf("%d", &n);
    
    // Rows ke liye outer loop
    for (int i = 1; i <= n; i++)
    {
        // Shuruati spaces print karne ke liye loop
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        // Ghattay hue number me asterisks print karne ke liye loop
        for (int j = 1; j <= 2 * n - (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
