/* Question: Ek program likhein jo 50 se chhote un numbers ka sum, product, aur count nikaale jo x se divisible hon par y se nahi. */

#include <stdio.h>

int main()
{
    int x, y, sum = 0, count = 0;
    double prod = 1;
    
    printf("Enter value of x and y\n");
    scanf("%d%d", &x, &y);
    
    // 1 se lekar 49 tak loop chalayein
    for (int i = 1; i < 50; i++)
    {
        // Divisibility conditions check karein
        if (i % x == 0 && i % y != 0)
        {
            printf("%d ", i);
            sum = sum + i;
            prod = prod * i;
            count++;
        }
    }
    
    printf("\ncount=%d", count);
    printf("\nsum is %d and product is %.1lf", sum, prod);
    
    return 0;
}
