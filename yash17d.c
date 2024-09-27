#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter X= ");
    scanf("%d",&x);
    switch (x)
    {
    case 0:
        printf("y=%d",0);
        break;
    default:
       y=(x>0? -1:1);
       printf("y=%d",y);
        break;
    }
    
    return 0;
    
}