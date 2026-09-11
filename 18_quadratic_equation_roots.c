/* Question: Ek program likhein jo quadratic equation (ax^2 + bx + c = 0) ke sabhi roots nikaale. */

#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    float x1, x2, D;
    
    // User se coefficients lein
    printf("Enter values of a , b , c \n");
    scanf("%d%d%d", &a, &b, &c);
    
    // Discriminant formula (D = b^2 - 4ac)
    D = (b * b - 4 * a * c);
    
    // Possible roots calculate karein
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    
    // Edge cases check karein
    if(a == 0 && b == 0)
    {
        printf("No solution");
    }
    else if(a == 0)
    {
        printf("Only one root");
    }
    else if (D < 0)
    {
        printf("No real root");
    }
    else
    {
        printf("Two real roots :%.1f and %.1f", x1, x2);
    }
    
    return 0;
}
