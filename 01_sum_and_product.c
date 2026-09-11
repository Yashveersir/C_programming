/* Question: Ek program likhein jo do numbers ka sum aur product nikaale. */

#include<stdio.h> // printf aur scanf use karne ke liye standard input-output library include karein

int main(void)
{
    float a, b; // Do numbers ko store karne ke liye variables declare karein
    
    // User ko pehla number enter karne ko kahein
    printf("Enter Number a\n");
    scanf("%f", &a); // Pehla number read karein
    
    // User ko doosra number enter karne ko kahein
    printf("Enter Number b\n");
    scanf("%f", &b); // Doosra number read karein
    
    // Sum aur product calculate karke print karein
    printf("Sum=%f\nProduct=%f", a+b, a*b);
    
    return 0; // Program successfully execute hone par 0 return karein
}
