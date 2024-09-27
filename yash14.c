#include<stdio.h>
int main()
{
    int n;
    printf("Enter a four digit number = ");
    scanf("%d",&n);
    int sum=0,y;
    while (n>0)
    {
        y=n%10;
        sum += y;
        n=n/10;
    }
    printf("sum of its digit : %d",sum);
    return 0;
}