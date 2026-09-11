/* Question: Ek program likhein jo sign function y = -1 (agar x>0), 1 (agar x<0), 0 (agar x=0) ko else-if ladder se implement kare. */

#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter X= ");
    scanf("%d", &x);
    
    // Else-if ladder structure ka use
    if (x < 0)
    {
        printf("y = %d ", 1);
    }
    else if (x > 0)
    {
        printf("y = %d ", -1);
    }
    else
    {
        printf("y = %d ", 0);
    }

    return 0;
}
