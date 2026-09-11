/* Question: Ek program likhein jo functions ka use karke array me maximum, minimum aur average values nikaale. */

#include <stdio.h>

// Pointers ka use karke array me maximum, minimum aur average values nikaalne ke liye function
void find_min_max_avg(int *arr, int n, int *min, int *max, int *avg)
{
    // Initial minimum aur maximum values set karein
    *min = *max = arr[0];

    // Sabse choti aur sabse badi values nikaalne ke liye array me iterate karein
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
    
    int sum = 0;
    // Average ke liye sum calculate karein
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    *avg = sum / n; // Average ke liye integer division
}

int main()
{
    int n, arr[100];

    // User se values ka number aur un values ko input lein
    printf("Enter number of values: ");
    scanf("%d", &n);
    printf("Enter values one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Minimum aur maximum values store karne ke liye variables initialize karein
    int min_value, max_value, avg_value;
    
    // Multiple results wapas paane ke liye function me addresses pass karein
    find_min_max_avg(arr, n, &min_value, &max_value, &avg_value);

    // Results print karein
    printf("Maximum value is %d\n", max_value);
    printf("Minimum value is %d\n", min_value);
    printf("Average value is %d\n", avg_value);

    return 0;
}
