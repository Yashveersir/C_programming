#include<stdio.h>
int main(void){
    float x;
    printf("Enter value of x: ");
    scanf("%f", &x);
    x=x*3.14/180;
    int i;
    float sum=x,temp=x;
    for ( i = 1; i <= 15; i+=2)
    {
        temp = (temp * (-1)*x*x)/((i+2)*(i+1));
        sum += temp;
    }
    printf("Value ofsine(%f) is %.2f",x,sum);
    return 0;
}