/* Question: Ek program likhein jo array me maximum aur minimum values aur unki positions nikaale. */

#include <stdio.h>

int main(void)
{
    int n, i, max, min, pos = 1, pos1 = 1;
    printf("Enter the no of values you want : ");
    scanf("%d", &n);
    
    int value[n];
    printf("Write values one by one \n");
    
    // Array ke elements read karein
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value[i]);
    }
    
    // Max aur min ko pehle element se initialize karein
    max = min = value[0];
    
    // Min, max aur unki positions nikaalne ke liye iterate karein
    for (i = 1; i < n; i++)
    {
        if (value[i] > max)
        {
            max = value[i];
            pos = i + 1; // 1-based position
        }
        else if (value[i] < min)
        {
            min = value[i];
            pos1 = i + 1; // 1-based position
        }
    }
    
    printf("Maximum value is %d and its position is %d ", max, pos);
    printf("\nMinimum value is %d and its position is %d", min, pos1);
    
    return 0;
}
