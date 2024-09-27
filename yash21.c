#include <stdio.h>
int main(void)
{
    int x;
    float y;
    printf("Enter the value of x : ");
    scanf("%f", &x);
    switch (x <= 1)
    {
    case 1:
        y = 1.2 * x + 0.98;
    break;

    case 0:
        y = 1.7 * x + 0.09;
    break;
    }
    printf("y=%f",y );
    return 0;
}