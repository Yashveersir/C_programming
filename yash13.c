#include<stdio.h>
int main()
{
    float a;
    printf("Enter a Number :");
    scanf("%f",&a);
    int b,y;
    b=(int)a;
    y= b % 10;
    while (b>=10)
    {
        b=b/10;
    }
    printf("Leftmost part of integral digit is %d, and Rightmost is %d ",b,y);
    return 0;

}