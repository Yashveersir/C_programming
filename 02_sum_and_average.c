/* Question: Ek program likhein jo teen numbers ka sum aur average nikaale. */

#include<stdio.h> // Standard input-output library include karein

int main(void)
{
    float a, b, c, sum; // 3 numbers aur unke sum ke liye variables declare karein
    
    // User se teen numbers enter karne ko kahein
    printf("Enter any three numbers\n");
    scanf("%f%f%f", &a, &b, &c); // Teen numbers read karein
    
    // Sum calculate karein
    sum = a + b + c;
    printf("Sum=%f", sum); // Sum print karein
    
    // Average calculate karke print karein (sum ko 3 se divide karke)
    printf("\nAverage=%f", sum/3);
    
    return 0;
}
