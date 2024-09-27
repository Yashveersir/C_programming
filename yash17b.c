#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter X= ");
    scanf("%d",&x);
    if (x<0)
    {
        printf("y = %d ",1); 
    }
    else if (x>0)
    {
        printf("y = %d ",-1);
    }
    else
    {
        printf("y = %d ",0);
    }
    
    return 0;
}