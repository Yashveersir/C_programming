/* Question: Ek program likhein jo algebraic expression y = x^2 + 2x - 1 ki value nikaale. */

#include<stdio.h>

int main(void)
{
    float x, y; // Variables x (input) aur y (output) declare karein
    
    // User se x ki value mangein
    printf("Enter a value x\n");
    scanf("%f", &x);
    
    // Expression calculate karein: y = x^2 + 2x - 1
    y = x * x + 2 * x - 1;
    
    // Result print karein
    printf("Value of y=%f", y);
    
    return 0;
}
