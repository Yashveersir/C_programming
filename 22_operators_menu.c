/* Question: Ek menu-driven program likhein jo C ke alag-alag operators (Arithmetic, Relational, Logical, etc.) ko demonstrate kare. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    char Choice;
    int num, num1, num2;
    
    // Operator menu display karein
    printf("---Menu---\n");
    printf("a> Arithmetic Operators\nb> Relational Operators\nc> Logical Operators\n");
    printf("d> Increment/Decrement Operators\ne> Bitwise Operators\nf> Assignment Operators\n");
    printf("g> Ternary Operators\nh> Size of Operators");
    printf("\nEnter Your Choice\n");
    scanf("%c", &Choice);
    
    // Choose kiye gaye operator ko execute karein
    switch (Choice)
    {
    case 'a':
        printf("Enter two Number\n");
        scanf("%d%d", &num1, &num2);
        printf("Addition is %d\nSubtraction is %d\nMultiplication is %d\nDivision is %d\nModulus is %d", 
               num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);
        break;
    case 'h':
        // Variable ki memory size (bytes me) print karein
        printf("size of int is %ld", sizeof(num));
        printf("\nsize of char is %ld", sizeof(char));
        printf("\nsize of float is %ld", sizeof(float));
        printf("\nsize of double is %ld", sizeof(double));
        break;
    default:
        printf("Menu not found");
    }
    return 0;
}
