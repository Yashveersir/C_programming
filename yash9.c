//dist travel by light in n years
#include<stdio.h>
int main(void)
{
    float n,time,distance,speed;
    printf("Enter year=");
    scanf("%f",&n);
    speed=300000; //speed in km/s
    time=n*365*24*60*60;
    distance=speed*time;
    printf("Distance travelled=\n%f",distance);
    return 0;
}