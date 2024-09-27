#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x,x1,x2,D;
    printf("Enter values of a , b , c \n");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b-4*a*c);
    x1=(-b+sqrt(D))/2*a;
    x2=(-b-sqrt(D))/2*a;
    if(a==0 && b==0)
    {
        printf("No solution");
    }
    else if(a==0)
    {
    
        printf("Only one root");
    }
    else if (D<0)
    {
        printf("No real root");
    }
    else
    {
        printf("Two real roots :%.1f and %.1f",x1,x2);
    }
    return 0;

}