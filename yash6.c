//find ASSCII character of given integer
#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter a integer\n");
    scanf("%d",&a);
    b=(char)a;
    printf("ASCII character=%c",b);
    return 0;

}