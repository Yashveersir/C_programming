/* Question: Ek program likhein jo right-angled triangle pattern print kare. */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of row = ");
    scanf("%d", &n);
    
    // Rows ke liye outer loop
    for (int i = 1; i <= n; i++)
    {
        // Har row me asterisks print karne ke liye inner loop
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
