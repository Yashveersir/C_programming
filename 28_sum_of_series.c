/* Question: Ek program likhein jo is series ka sum calculate kare: 1 + (1+2) + (1+2+3) + ... + (1+2+...+n). */

#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    printf("Enter the value of n (last digit): ");
    scanf("%d", &n);
    
    // Number of terms ke liye outer loop chalayein
    for (int i = 1; i <= n; i++)
    {
        // i tak sum calculate karne ke liye inner loop
        for (int j = 1; j <= i; j++)
        {
            sum = sum + j;
        }
    }
    
    printf("sum of series = %d", sum);
    
    return 0;
}
