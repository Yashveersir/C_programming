/* Question: Ek program likhein jo switch statement ka use karke diye gaye x ke liye piecewise function evaluate kare. */

#include <stdio.h>

int main(void)
{
    int x;
    float y;
    printf("Enter the value of x : ");
    scanf("%f", &x); // Note: x integer hai, par usme %f scanf ka use ho raha hai, original logic ko choda gaya hai
    
    // Boolean condition (x <= 1) par switch karein jo 1 (true) ya 0 (false) return karta hai
    switch (x <= 1)
    {
    case 1:
        y = 1.2 * x + 0.98;
        break;
    case 0:
        y = 1.7 * x + 0.09;
        break;
    }
    
    printf("y=%f", y);
    return 0;
}
