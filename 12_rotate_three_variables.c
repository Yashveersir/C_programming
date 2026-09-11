/* Question: Ek program likhein jo x, y, z ki values ko rotate kare (x->y, y->z, z->x) bina kisi extra variable ke. */

#include<stdio.h>

int main()
{
    int x, y, z;
    
    // User se x, y, z mangein
    printf("Enter values of x, y, z\n");
    scanf("%d%d%d", &x, &y, &z);
    
    // Addition aur subtraction ka use karke values ko rotate karein
    z = x + y + z;
    y = z - x - y;
    x = z - x - y;
    z = z - x - y;
    
    // Rotated values display karein
    printf("Their Rorated values are x=%d, y=%d, z=%d ", x, y, z);
    
    return 0;
}
