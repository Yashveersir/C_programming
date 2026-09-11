/* Question: Ek program likhein jo circle ka area aur circumference nikaale. */

#include<stdio.h>

int main(void)
{
    float r, area, circumference; // Radius, area aur circumference ke liye variables
    
    // User se radius enter karne ko kahein
    printf("Radius of circle=");
    scanf("%f", &r);
    
    // Area calculate karein (Pi * r^2)
    area = 3.14 * r * r;
    
    // Circumference calculate karein (2 * Pi * r)
    circumference = 2 * 3.14 * r;
    
    // Calculate kiye gaye area aur circumference ko print karein
    printf("Area of circle=%f\nCircumference of circle=%f", area, circumference);
    
    return 0;
}
