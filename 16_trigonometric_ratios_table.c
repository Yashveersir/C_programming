/* Question: Ek program likhein jo x ki value 0 se 90 degrees (15 ke step me) ke liye sin(x), cos(x), aur tan(x) ki table print kare. */

#include<stdio.h>
#include<math.h> // sin, cos, tan functions ke liye math library include karein

int main()
{
    float s, c, t;
    float rad;
    
    printf("x\tsin(x)\tcos(x)\ttan(x)\n");
    
    // Angles 0, 15, 30, ..., 90 par loop chalayein
    for(int i = 0; i <= 90; i = i + 15)
    {
        rad = i * 3.14 / 180; // Degrees ko radians me convert karein
        
        s = sin(rad); // Sine
        c = cos(rad); // Cosine
        t = tan(rad); // Tangent
        
        // Table ki row (angle aur uski values) print karein
        printf("%d\t%.2f\t%.2f\t%.2f\n", i, s, c, t);
    }
    
    return 0;
}
