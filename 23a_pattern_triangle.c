/* Question: Ek program likhein jo asterisks (*) ka use karke triangle pattern print kare. */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of row = ");
    scanf("%d", &n);
    
    // Rows ke liye outer loop chalayein
    for (int i = 1; i <= n; i++)
    {
        // Shuruat me space print karne ke liye loop
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }
        // Asterisks print karne ke liye loop
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n"); // Nayi line
    }
    return 0;
}
