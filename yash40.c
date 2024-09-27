#include <stdio.h>

// Function to calculate the value of a polynomial recursively
int calculate_polynomial(int x, int* coefficients, int n, int i, int sum) {
    if (i == 0) return coefficients[i] * x + sum;
    sum = sum * x + coefficients[i];
    return calculate_polynomial(x, coefficients, n, i - 1, sum);
}

int main(void) {
    // Input: value of x and the order of the polynomial
    int x, n, i;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the order of the polynomial: ");
    scanf("%d", &n);

    // Input: the coefficients of the polynomial
    int coefficients[n + 1];
    printf("Enter the coefficients of the polynomial, one by one: ");
    for (i = 0; i <= n; i++) {
        scanf("%d", &coefficients[i]);
    }

    // Calculate and print the value of the polynomial
    int sum = calculate_polynomial(x, coefficients, n, n, 0);
    printf("The value of the polynomial is: %d\n", sum);

    return 0;
}