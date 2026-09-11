/* Question: Ek program likhein jo Taylor series expansion ka use karke sine(x) ki value nikaale. */

#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter value of x (in degrees): ");
    scanf("%f", &x);
    
    // Degrees ko radians me convert karein
    x = x * 3.14 / 180;
    
    int i;
    float sum = x, temp = x;
    
    // Loop ka use karke 15 terms tak sine series calculate karein
    for (i = 1; i <= 15; i += 2)
    {
        temp = (temp * (-1) * x * x) / ((i + 2) * (i + 1));
        sum += temp;
    }
    
    printf("Value of sine is %.2f", sum);
    
    return 0;
}
