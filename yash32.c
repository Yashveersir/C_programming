#include <stdio.h>
int main(void)
{
    int n, i, sumeven = 0, sumodd = 0;
    printf("Enter the no of values you want : ");
    scanf("%d", &n);
    int value[n];
    printf("Write values one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value[i]);
        if (value[i] % 2 == 0)
            sumeven += value[i];
        else
            sumodd += value[i];
    }
    printf("sum of even numbers is %d ", sumeven);
    printf("\nsum of odd numbers is %d ", sumodd);
    return 0;
}