/*convert degree celcius to degree farenhite*/
#include<stdio.h>
int main(void)
{
    float celcius,farenhite;
    printf("Enter temperature in celcius\n");
    scanf("%f",&celcius);
    farenhite=1.8*celcius+32;
    printf("Temperature in farenhite=\n%f",farenhite);
    return 0;
}