#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter X= ");
    scanf("%d",&x);
    if (x!=0)
    {
        if(x>0)
        {
            printf("y is equal to %d",-1);
        }
        else{
            printf("y is equal to %d",1);
        }
    }
    else {
        printf("y is equal to %d",0);
    }
    return 0;
    
    
    }
