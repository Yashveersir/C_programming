#include <stdio.h>
int main(void)
{
    int n, i, max, min, pos, pos1;
    printf("Enter the no of values you want : ");
    scanf("%d", &n);
    int value[n];
    printf("Write values one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value[i]);
    }
    max = min = value[0];
    for (i = 1; i < n; i++)
    {
        if (value[i] > max)
        {
            max = value[i];
            pos = i + 1;
        }
        else if (value[i] < min)
        {
            min = value[i];
            pos1 = i + 1;
        }
    }
    printf("Maximum value is %d and its position is %d ", max, pos);
    printf("\nMinimum value is %d and its position is %d", min, pos1);
    return 0;
}