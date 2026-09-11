/* Question: Ek program likhein jo check kare ki diya gaya number palindrome hai ya nahi. */

#include <stdio.h>

int main(void)
{
    int num, rem, num1, result = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    num1 = num; // Original number ko save karein
    
    // Number ko reverse karein
    while (num != 0)
    {
        rem = num % 10;
        result = result * 10 + rem;
        num = num / 10;
    }
    
    // Check karein ki original aur reversed number same hain ya nahi
    if (result == num1)
        printf("%d is palindrome", num1);
    else
        printf("%d is not a palindrome", num1);
        
    return 0;
}
