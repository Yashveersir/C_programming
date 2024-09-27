#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter values of x, y, z\n");
    scanf("%d%d%d",&x,&y,&z );
    z=x+y+z;
    y=z-x-y;
    x=z-x-y;
    z=z-x-y;
    printf("Their Rorated values are x=%d, y=%d, z=%d " , x, y, z );
    return 0;
}