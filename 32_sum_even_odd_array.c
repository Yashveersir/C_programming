/* Question: Ek program likhein jo array me even aur odd numbers ka sum nikaale. */

#include <stdio.h>

int main(void)
{
    int n, i, sumeven = 0, sumodd = 0;
    printf("Enter the no of values you want : ");
    scanf("%d", &n);
    
    int value[n]; // Variable Length Array (VLA) declare karein
    printf("Write values one by one \n");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value[i]);
        
        // Check karein ki even hai ya odd aur unke respective sum me add karein
        if (value[i] % 2 == 0)
            sumeven += value[i];
        else
            sumodd += value[i];
    }
    
    printf("sum of even numbers is %d ", sumeven);
    printf("\nsum of odd numbers is %d ", sumodd);
    
    return 0;
}
