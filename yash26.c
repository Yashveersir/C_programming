#include<stdio.h>
int main(void)
{
    int n,r,x=1,y,z=1;
    printf("Enter total  number of item : ");
    scanf("%d",&n);
    printf("Enter number of item taken at a time : ");
    scanf("%d",&r);
    for (int i = n; i >= 1; i--)
    {
        x=x*i;
    }
    y=n-r;
    for(int i=y; i>=1; i--)
    {
       z=z*i; 
    }
    printf("Premutation of %d and %d is %d",n,r,x/z);
    return 0;
    

}
