/* Question: Ek program likhein jo diye gaye integer ka ASCII character nikaale. */

#include<stdio.h>

int main(void)
{
    int a, b;
    
    // User se ek integer value enter karne ko kahein
    printf("Enter a integer\n");
    scanf("%d", &a);
    
    // Integer 'a' ko character 'b' me typecast karein taaki uska ASCII equivalent mile
    b = (char)a;
    
    // Corresponding ASCII character print karein
    printf("ASCII character=%c", b);
    
    return 0;
}
