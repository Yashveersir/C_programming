#include <stdio.h>
#include <math.h>
float roundoff(float x);
int main(void)
{
    float x, y;
    int i = 1, num, rem, rem1, result = 0;
    printf("Enter a floating point number :  ");
    scanf("%f", &x);
    y = roundoff(x);
    num = y * 100;
    printf("\nThe rounded value of %f is %.2f\n", x, y);
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
float roundoff(float x)
{
    int c, d, t, y, r;
    float a, b, n, temp;
    a = x;
    b = a * 100;
    c = (int)b;
    x = x * 1000;
    y = (int)x;
    r = y % 10;
    if (r >= 5)
        t = 1;
    else
        t = 0;
    d = c + t;
    n = (float)d;
    temp = n / 100;
    return temp;
}
