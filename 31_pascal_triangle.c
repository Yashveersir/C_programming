/* Question: Ek program likhein jo Pascal's Triangle print kare. */

#include <stdio.h>

int main() {
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   // Rows ke liye outer loop
   for (i = 0; i < rows; i++) {
      // Formatting ke liye spaces print karein
      for (space = 1; space <= rows - i; space++)
         printf("  ");
         
      // Coefficients calculate aur print karne ke liye loop
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1; // Pehla element humesha 1 hota hai
         else
            coef = coef * (i - j + 1) / j; // Binomial coefficient calculate karein
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}
