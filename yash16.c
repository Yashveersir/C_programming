#include<stdio.h>
#include<math.h>
int main()
{
    float s,c,t;
    float rad;
    printf("x\tsin(x)\tcos(x)\ttan(x)\n");
    for(int i=0; i<=90; i=i+15)
    {
        rad=i*3.14/180;
        s=sin(rad);
        c=cos(rad);
        t=tan(rad);
        printf("%d\t%.2f\t%.2f\t%.2f\n",i, s,c,t);
    }
    return 0;

}