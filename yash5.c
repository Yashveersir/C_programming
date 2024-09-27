/*find value of expression y=x^2+2x-1*/
#include<stdio.h>
int main(void)
{
    float x,y;
    printf("Enter a value x\n");
    scanf("%f",&x);
    y=x*x+2*x-1;
    printf("Value of y=%f",y);
    return 0;
}