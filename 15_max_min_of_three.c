/* Question: Ek program likhein jo ternary operators ka use karke teen numbers me se maximum aur minimum nikaale. */

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers \n");
    scanf("%d%d%d", &a, &b, &c);
    
    int max, min;
    
    // Nested ternary operator ka use karke max calculate karein
    max = (a > b) ? (a > c ? a : c) : (c > b ? c : b);
    
    // Nested ternary operator ka use karke min calculate karein
    min = (a < b) ? (a < c ? a : c) : (c < b ? c : b);
    
    // Min aur max ko display karein
    printf("max=%d\n", max);
    printf("min=%d", min);
    
    return 0;
}
