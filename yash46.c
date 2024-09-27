#include<stdio.h>
int main(void)
{
    int a,b,c;
    int* p1;
    int* p2;
    int* p3;
    typedef int* pointers;
    pointers max,min;
    printf("Enter Values of a, b and c :");
    scanf("%d %d %d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    max= (*p1>*p2)?(*p1>*p3? p1:p3):(*p3>*p2? p3:p2);
    min= (*p1<*p2)?(*p1<*p3? p1:p3):(*p3<*p2? p3:p2);
    printf("max=%d\n",*max);
    printf("min=%d",*min);
    return 0;
}