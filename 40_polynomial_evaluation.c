/* Question: Ek program likhein jo recursively polynomial ki value calculate kare. */

#include <stdio.h>

// Horner's Method ka use karke polynomial ki value recursively calculate karne ke liye function
int calculate_polynomial(int x, int* coefficients, int n, int i, int sum) {
    if (i == 0) return coefficients[i] * x + sum; // Base case
    sum = sum * x + coefficients[i]; // Recursive step
    return calculate_polynomial(x, coefficients, n, i - 1, sum);
}

int main(void) {
    int x, n, i;
    
    // Input: x ki value aur polynomial ka order
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the order of the polynomial: ");
    scanf("%d", &n);

    // Input: polynomial ke coefficients
    int coefficients[n + 1]; // Coefficients hold karne ke liye array
    printf("Enter the coefficients of the polynomial, one by one: ");
    for (i = 0; i <= n; i++) {
        scanf("%d", &coefficients[i]);
    }

    // Polynomial ki value calculate aur print karein
    int sum = calculate_polynomial(x, coefficients, n, n, 0);
    printf("The value of the polynomial is: %d\n", sum);

    return 0;
}
