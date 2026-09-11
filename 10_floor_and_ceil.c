/* Question: Ek program likhein jo floor aur ceil ka use karke kisi decimal number se sabse chota aur sabse bada integer print kare. */

#include<stdio.h>
#include<math.h> // floor() aur ceil() ke liye math library include karein

int main(void)
{
    float small, large, n;
    
    // Ek decimal (floating-point) number read karein
    printf("Enter a decimal number=");
    scanf("%f", &n);
    
    // floor(n) humesha n se chota ya uske barabar ka largest integer return karta hai
    small = floor(n);
    
    // ceil(n) humesha n se bada ya uske barabar ka smallest integer return karta hai
    large = ceil(n);
    
    // Results ko output karein
    printf("The smallest integer not less than the number is %f\n", small);
    printf("And The largest integer not greater than the number is %f\n", large);
    
    return 0;
}
