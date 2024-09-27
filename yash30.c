#include<stdio.h>
int main(void)
{
    int i,j,k,l,n,x=1;
    printf("Enter number of rows \n");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf(" ");
        }
        for(k=i;k<=2*i-1;k++)
        {
            printf("%d", k);
        }
        for(l=2*i-2;l>=i;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}