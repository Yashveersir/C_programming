#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    int max,min;
    max= (a>b)?(a>c? a:c):(c>b? c:b);
    min= (a<b)?(a<c? a:c):(c<b? c:b);
    printf("max=%d\n",max);
    printf("min=%d",min);
    return 0;
}