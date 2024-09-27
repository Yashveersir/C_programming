#include <stdio.h>
#include <math.h>
int main(void)
{
    char a, b, c, d, choice;
    int num, rem, q, x, count = 0, result = 0;
    printf("Menu\n");
    printf("a> Prime Number\nb> Even/odd Number\nc> Armstrong Number\nd> Positive/Negative/Zero");
    printf("\nEnter your choice\n");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'a':
    {
        printf("Enter Number : ");
        scanf("%d", &num);
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
                count++;
        }
        if (count <= 2 && num != 1)
        {
            printf("%d is a prime number", num);
        }
        else
        {
            printf("%d is not a prime number", num);
        }
    }
    break;
    case 'b':
    {
        printf("Enter Number : ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("%d is a Even Number", num);
        }
        else
        {
            printf("%d is a Odd Number", num);
        }
    }
    break;
    case 'c':
    {
        printf("Enter Number : ");
        scanf("%d", &num);
        q = num;
        x = num;
        while (x > 0)
        {
            x = x / 10;
            count++;
        }
        while (num > 0)
        {
            rem = num % 10;
            result = result + pow(rem, count);
            num = num / 10;
        }
        if (q == result)
        {
            printf("Armstrong Number");
        }
        else
        {
            printf("Not Armstrong Number");
        }
    }
    break;
    case 'd':
    {
        printf("Enter Number : ");
        scanf("%d", &num);
        if (num != 0)
        {
            if (num > 0)
            {
                printf("Positive");
            }
            else
            {
                printf("Negative");
            }
        }
        else
        {
            printf("Zero");
        }
    }
    break;
    default:
        printf("Enter the wrong menu");
    }
    return 0;
}