#include <stdio.h>
int main(void)
{
    int n, i, max, min, countp = 0, countn = 0, countz = 0;
    printf("Enter the no of values you want : ");
    scanf("%d", &n);
    int value[n];
    printf("Write the integer values one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value[i]);
        if (value[i] > 0)
            countp++;
        else if (value[i] < 0)
            countn++;
        else
            countz++;
    }
    printf("Number of positive integer is %d", countp);
    printf("\nNumber of negative integer is %d", countn);
    printf("\nNumber of zeroes is %d", countz);
    return 0;
}