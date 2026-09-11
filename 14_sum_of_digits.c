/* Question: Ek program likhein jo kisi diye gaye number ke digits ka sum nikaale. */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a four digit number = ");
    scanf("%d", &n);
    
    int sum = 0, y;
    
    // Har ek digit par loop karein jab tak n 0 na ho jaye
    while (n > 0)
    {
        y = n % 10; // Aakhri digit nikaalein
        sum += y;   // Usko sum me add karein
        n = n / 10; // Aakhri digit ko remove karein
    }
    
    // Sum ko output karein
    printf("sum of its digit : %d", sum);
    
    return 0;
}
