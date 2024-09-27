#include <stdio.h>
int main(void)
{
    int num, rem, num1, result = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    num1 = num;
    while (num != 0)
    {
        rem = num % 10;
        result = result * 10 + rem;
        num = num / 10;
    }
    if (result==num1)
        printf("%d is palindrome", num1);
    else
        printf("%d is not a palindrome", num1);
    return 0;
}