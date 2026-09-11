/* Question: Ek menu-driven program likhein jo functions ka use karke factorial, combinations, aur exponentials calculate kare. */

#include <stdio.h>

// Function declarations
int facto(int n);
float comb(int n1, int r);
int expo(int x, int y);

int main(void)
{
    printf("---MENU---");
    char choice;
    printf("\na>Factorial");
    printf("\nb>Combination");
    printf("\nc>Exponential");
    printf("\nEnter your choice: ");
    scanf(" %c", &choice); // Newline ko consume karne ke liye %c se pehle space dala hai
    
    int n, n1, r, x, y;
    switch (choice)
    {
    case 'a':
        printf("Enter the value of n : ");
        scanf("%d", &n);
        printf("Factorial of %d is %d", n, facto(n));
        break; // Fallthrough ko rokne ke liye break add kiya gaya

    case 'b':
        printf("\nEnter total amount : ");
        scanf("%d", &n1);
        printf("Enter selected number of amount : ");
        scanf("%d", &r);
        printf("The combination value of %d And %d is %.2f", n1, r, comb(n1, r));
        break; // Break add kiya gaya

    case 'c':
        printf("\nEnter base number : ");
        scanf("%d", &x);
        printf("Enter power number : ");
        scanf("%d", &y);
        printf("The value of %d power %d is %d", x, y, expo(x, y));
        break; // Break add kiya gaya
    }
    return 0;
}

// Factorial ko recursively calculate karne ke liye function
int facto(int n)
{
    if (n == 1 || n == 0) // Base case fix kiya
        return 1;
    return facto(n - 1) * n;
}

// Combinations (nCr) calculate karne ke liye function
float comb(int n1, int r)
{
    if (n1 == 1 || r == 1 || (n1 - r) == 1)
        return 1;
    // n!, r!, (n-r)! calculate karein
    int numfact = facto(n1);
    int denumfact = facto(r);
    int difffacto = facto(n1 - r);
    float combination = (float)numfact / (denumfact * difffacto); // Float cast add kiya gaya
    return combination;
}

// Exponential (x^y) ko recursively calculate karne ke liye function
int expo(int x, int y)
{
    if (y == 0)
        return 1;
    return x * expo(x, y - 1);
}
