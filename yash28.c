#include<stdio.h>
int main(void)
{
    int n,sum=0;
    printf("Enter the value of n(last digit) : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            sum=sum+j;
        }
    }
    printf("sum of series = %d",sum);
    return 0;
}