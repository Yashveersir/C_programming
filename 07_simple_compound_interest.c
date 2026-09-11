/* Question: Ek program likhein jo simple aur compound interest calculate kare. */

#include<stdio.h>
#include<math.h> // pow() function use karne ke liye math library include karein

int main(void)
{
    float P, T, R, SI, CI;
    
    // User se Principal, Time, aur Rate lein
    printf("Enter Principal Amount=");
    scanf("%f", &P);
    printf("Enter Time period(in year)=");
    scanf("%f", &T);
    printf("Enter annual interest rate(%%)=");
    scanf("%f", &R);
    
    // Simple Interest calculate karein: SI = (P * T * R) / 100
    SI = P * T * R / 100;
    printf("Simple Interest=%f\n", SI);
    
    // Compound Interest calculate karein: CI = P(1 + R/100)^T - P
    CI = P * pow((1 + R / 100), T) - P;
    printf("Compound Interest=%f\n", CI);

    return 0;
}
