/* Question: Ek program likhein jo number ko words me print kare (jaise, 123 ko One Two Three). */

#include <stdio.h>

int main(void)
{
    int num, rem, rem1, result = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    
    // Number ko reverse karein taaki left se right print ho sake
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        result = result * 10 + rem;
    }
    
    // Har ek digit ko word me print karein
    while (result != 0)
    {
        rem1 = result % 10;
        result = result / 10;

        switch (rem1)
        {
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
        default: printf("Zero "); break;
        }
    }

    return 0;
}
