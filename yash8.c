//swap two variable using third variable
#include<stdio.h>
int main(void)
{
    int x,y,z;
    printf("Enter the value of x= ");
    scanf("%d",&x);
    printf("Enter the value of y= ");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("After swaping value of x= %d",x);
    printf("\nAfter swaping value of x= %d",y);

    return 0;

}