/* Question: Ek program likhein jo ek third temporary variable ka use karke do variables ko swap kare. */

#include<stdio.h>

int main(void)
{
    int x, y, z;
    
    // x aur y ki values read karein
    printf("Enter the value of x= ");
    scanf("%d", &x);
    printf("Enter the value of y= ");
    scanf("%d", &y);
    
    // Third variable 'z' ka use karke swapping logic lagayein
    z = x; // x ko temporary variable z me store karein
    x = y; // y ko x me copy karein
    y = z; // Original x (jo ab z me hai) ko y me copy karein
    
    // Swap ki hui values output karein
    printf("After swaping value of x= %d", x);
    printf("\nAfter swaping value of y= %d", y);

    return 0;
}
