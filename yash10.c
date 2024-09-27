//print smallest and largest integer from decimal no
#include<stdio.h>
int main(void)
{
    float small,large,n;
    printf("Enter a decimal number=");
    scanf("%f",&n);
    small= floor(n);
    large= ceil(n);
    printf("The smallest integer not less than the number is %f\n",small);
    printf("And The largest integer not greater than the number is %f\n",large);
    return 0;
}