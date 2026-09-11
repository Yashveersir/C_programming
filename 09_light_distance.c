/* Question: Ek program likhein jo n years me light dwara travel ki gayi distance calculate kare. */

#include<stdio.h>

int main(void)
{
    float n, time, distance, speed;
    
    // User se number of years mangein
    printf("Enter year=");
    scanf("%f", &n);
    
    // Speed of light lagbhag 300,000 km/s hoti hai
    speed = 300000; 
    
    // Years ko seconds me convert karein: n years * 365 days * 24 hours * 60 minutes * 60 seconds
    time = n * 365 * 24 * 60 * 60;
    
    // Total distance calculate karein (Distance = Speed * Time)
    distance = speed * time;
    
    // Calculate ki hui distance print karein
    printf("Distance travelled=\n%f", distance);
    
    return 0;
}
