/*area and circumference of circle*/
#include<stdio.h>
int main(void)
{
    float r,area,circumference;
    printf("Radius of circle=");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("Area of circle=%f\nCircumference of circle=%f",area,circumference);
    return 0;
}