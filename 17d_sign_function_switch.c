/* Question: Ek program likhein jo sign function y = -1 (agar x>0), 1 (agar x<0), 0 (agar x=0) ko switch case se implement kare. */

#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter X= ");
    scanf("%d", &x);
    
    // Switch case structure ka use
    switch (x)
    {
    case 0:
        printf("y=%d", 0);
        break;
    default:
       y = (x > 0 ? -1 : 1);
       printf("y=%d", y);
       break;
    }

    return 0;
}
