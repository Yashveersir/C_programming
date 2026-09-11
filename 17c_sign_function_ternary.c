/* Question: Ek program likhein jo sign function y = -1 (agar x>0), 1 (agar x<0), 0 (agar x=0) ko ternary operators se implement kare. */

#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter X= ");
    scanf("%d", &x);
    
    // Nested ternary operator ka use
    y = (x != 0) ? (x > 0 ? -1 : 1) : 0;
    
    printf("Y is %d", y);

    return 0;
}
