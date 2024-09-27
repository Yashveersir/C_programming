#include <stdio.h>
int main()
{
    int x, y, sum = 0, count = 0;
    double prod = 1;
    printf("Enter value of x and y\n");
    scanf("%d%d", &x, &y);
    for (int i = 1; i < 50; i++)
    {

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