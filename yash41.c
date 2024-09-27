#include <stdio.h>
int facto(int n);
float comb(int n1, int r);
int expo(int x, int y);
int main(void)
{
    printf("---MENU---");
    char a, b, c, choice;
    printf("\na>Factorial");
    printf("\nb>Combination");
    printf("\nc>Exponential");
    printf("\nEnter your choice: ");
    scanf("%c", &choice);
    int n, n1, r, x, y;
    switch (choice)
    {
    case 'a':
        printf("Enter the value of n : ");
        scanf("%d", &n);
        printf("Factorial of %d is %d", n, facto(n));

    case 'b':
        printf("\nEnter total amount : ");
        scanf("%d", &n1);
        printf("Enter selcted number of amount : ");
        scanf("%d", &r);
        printf("The combination value of %d And %d is %.2f", n1, r, comb(n1, r));

    case 'c':
        printf("\nEnter base number : ");
        scanf("%d", &x);
        printf("Enter power number : ");
        scanf("%d", &y);
        printf("The value of %d power %d is %d", x, y, expo(x, y));
    }
    return 0;
}
int facto(int n)
{
    if (n == 1)
        return 1;
    int facto1 = facto(n - 1);
    int factorial = facto1 * n;
    return factorial;
}
float comb(int n1, int r)
{
    if (n1 == 1 || r == 1 || (n1 - r) == 1)
        return 1;
    int num = facto(n1 - 1);
    int numfact = num * n1;
    int denum = facto(r - 1);
    int denumfact = denum * r;
    int y = n1 - r;
    int diff = facto(y - 1);
    int difffacto = diff * y;
    float combination = numfact / (denumfact * difffacto);
    return combination;
}
int expo(int x, int y)
{
    if (y == 0)
        return 1;
    int z = expo(x, y - 1);
    int a = x * z;
    return a;
}
