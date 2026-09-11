/* Question: Ek program likhein jo seconds ko days, hours, aur minutes me convert kare. */

#include<stdio.h>

int main(void)
{
    float sec, min, hours, day;
    
    // User se seconds ki value mangein
    printf("Enter value of second=");
    scanf("%f", &sec);
    
    // Conversions perform karein
    min = sec / 60; // Ek minute me 60 seconds hote hain
    hours = min / 60; // Ek hour me 60 minutes hote hain
    day = hours / 24; // Ek din me 24 hours hote hain
    
    // Results display karein
    printf("In minutes=%f\n", min);
    printf("In hours=%f\n", hours);
    printf("In days=%f", day);

    return 0;
}
