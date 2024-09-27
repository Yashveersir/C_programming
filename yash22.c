#include <stdio.h>
#include <math.h>
int main(void)
{
    char a, b, c, d, e, f, g, h, Choice;
    int num, num1, num2;
    printf("---Menu---\n");
    printf("a> Arithmetic Operators\nb> Relational Operators\nc> Logical Operators\nd> Increment/Decrement Operators\ne> Bitwise Operators\nf> Assignment Operators\ng> Ternary Operators\nh> Size of Operators");
    printf("\nEnter Your Choice\n");
    scanf("%c", &Choice);
    switch (Choice)
    {
    case 'a':
        printf("Enter two Number\n");
        scanf("%d%d", &num1, &num2);
        printf("Addition is %d\nSubtraction is %d\nMultiplication is %d\nDivision is %d\nModulus is %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);
        break;
    case 'b':
        printf("Enter two Number\n");
        scanf("%d%d", &num1, &num2);
        if (num1 == num2)
            printf("%d is equal to %d", num1, num2);
        else if (num1 > num2)
            printf("%d is greater than %d", num1, num2);
        else
            printf("%d is less than %d", num1, num2);
        break;
    case 'c':
        printf("Enter two Number (use 1 or 0 in any order)\n");
        scanf("%d%d", &num1, &num2);
        printf("%d AND %d gives %d", num1, num2, num1 && num2);
        printf("\n%d OR %d gives %d", num1, num2, num1 || num2);
        printf("\n%d NOT gives %d", num1, !num1);
        printf("\n%d NOT gives %d", num2, !num2);
        break;
    case 'd':
        printf("Enter a number = ");
        scanf("%d", &num);
        num1 = num;
        printf("Increment value is %d", ++num);
        printf("\nDecrement value is %d", --num1);
        break;
    case 'e':
        printf("Enter two Number\n");
        scanf("%d%d", &num1, &num2);
        printf("\nBitwise AND Operation of %d and %d is %d", num1, num2, num1 & num2);
        printf("\nBitwise OR Operation of %d and %d is %d", num1, num2, num1 | num2);
        printf("\nBitwise NOT Operation of %d is %d and %d is %d", num1, ~num1, num2, ~num2);
        printf("\nBitwise XOR Operation of %d and %d is %d", num1, num2, num1 ^ num2);
        printf("\nFor left and right shift operation enter no of places you want to shift = ");
        scanf("%d", &num);
        printf("\nLeft shift of %d is %d and %d is %d", num1, num1 << num, num2, num2 << num);
        printf("\nRight shift of %d is %d and %d is %d", num1, num1 >> num, num2, num2 >> num);
        break;
    case 'f':
        printf("Enter two Number\n");
        scanf("%d%d", &num1, &num2);
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
        printf("Swaped numbers are %d and %d", num1, num2);
        break;
    case 'g':
        printf("Enter three numbers \n");
        scanf("%d%d%d", &num, &num1, &num2);
        int max, min;
        max = (num > num1) ? (num > num2 ? num : num2) : (num2 > num1 ? num2 : num1);
        min = (num < num1) ? (num < num2 ? num : num2) : (num2 < num1 ? num2 : num1);
        printf("max=%d\n", max);
        printf("min=%d", min);
        break;
    case 'h':
        printf("size of int is %d", sizeof(num));
        printf("\nsize of char is %d", sizeof(char));
        printf("\nsize of short int is %d", sizeof(short int));
        printf("\nsize of float is %d", sizeof(float));
        printf("\nsize of double is %d", sizeof(double));
        printf("\nsize of long double is %d", sizeof(long double));
        break;
    default:
        printf("Menu not found");
    }
    return 0;
}