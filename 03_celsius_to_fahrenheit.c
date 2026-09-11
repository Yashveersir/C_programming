/* Question: Ek program likhein jo temperature ko degree Celsius se degree Fahrenheit me convert kare. */

#include<stdio.h>

int main(void)
{
    float celcius, farenhite; // Temperatures ke liye variables declare karein
    
    // User se temperature in Celsius enter karne ko kahein
    printf("Enter temperature in celcius\n");
    scanf("%f", &celcius);
    
    // Conversion formula lagayein: F = (9/5 * C) + 32, jahan 9/5 hota hai 1.8
    farenhite = 1.8 * celcius + 32;
    
    // Result print karein
    printf("Temperature in farenhite=\n%f", farenhite);
    
    return 0;
}
