/* Question: Ek program likhein jo ek number pyramid pattern print kare. */

#include <stdio.h>

int main(void)
{
    int i, j, k, l, n;
    printf("Enter number of rows \n");
    scanf("%d", &n);
    
    // Rows ke liye outer loop
    for (i = 1; i <= n; i++)
    {
        // Formatting ke liye spaces print karein
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        // Badhte hue numbers print karein
        for (k = i; k <= 2 * i - 1; k++)
        {
            printf("%d", k);
        }
        // Ghattay hue numbers print karein
        for (l = 2 * i - 2; l >= i; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    
    return 0;
}
