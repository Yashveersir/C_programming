#include <stdio.h>
int main(void)
{
    int num, rem,rem1, y, result = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        result = result * 10 + rem;
    }
    while (result != 0)
    { 
        rem1 = result % 10;
        result = result / 10;

        switch (rem1)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;

        default:
            printf("Zero ");
            break;
        }
    }
    
    return 0;
}