/* Question: Ek program likhein jo kisi floating-point number ke leftmost aur rightmost integral digits nikaale. */

#include<stdio.h>

int main()
{
    float a;
    printf("Enter a Number :");
    scanf("%f", &a);
    
    int b, y;
    b = (int)a; // Float ko integer me typecast karein taaki decimal part hat jaye
    y = b % 10; // Modulo 10 ka use karke rightmost digit (aakhri digit) nikaalein
    
    // Leftmost digit nikaalne ke liye loop chalayein
    while (b >= 10)
    {
        b = b / 10; // Bar bar 10 se divide karein jab tak sirf pehla digit na bache
    }
    
    // Results ko output karein
    printf("Leftmost part of integral digit is %d, and Rightmost is %d ", b, y);
    
    return 0;
}
