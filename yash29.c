#include <stdio.h>
#include <math.h>
int main(void)
{
    long long num, binary = 0;
    int num1;
    int rem, result = 0;
    printf("---Menu---\n");
    printf("a>Convert Binary to Decimal\nb>Convert Decimal to Binary\nc> Exit");
    char choice;
    printf("\nEnter your choice : ");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'a':
        printf("Enter a Binary number : ");
        scanf("%lld", &num);
        int i=0 ;
        while (num != 0)
        {
            rem = num % 10;
            num = num / 10;
            result = result + rem * pow(2, i);
            ++i;
        }
        printf("Decimal number of given binary number is %d", result);
        break;
    case 'b':
        printf("Enter a Decimal number : ");
        scanf("%d", &num1);
        int j=1;
        while (num1 != 0)
        {
            rem = num1 % 2;
            num1 = num1 / 2;
            binary = binary + rem * j;
            j = j * 10;
        }
        printf("Binary number of given Decimal number is %lld", binary);
        break;

    default:
        printf("Exit");
    }
    return 0;
}