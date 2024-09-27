/*finding the sum and average of three numbers*/
#include<stdio.h>
int main(void)
{
    float a,b,c,sum;
    printf("Enter any three numbers\n");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b+c;
    printf("Sum=%f",sum);
    printf("\nAverage=%f",sum/3);
    return 0;
}