#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter X= ");
    scanf("%d",&x);
    y=(x!=0)?(x>0? -1:1):0;
    printf("Y is %d",y);

    return 0;
}