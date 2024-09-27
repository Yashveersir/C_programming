#include <stdio.h>

// Function to find the maximum, minimum and average values in an array
void find_min_max_avg(int *arr, int n, int *min, int *max, int *avg)
{
    // Set initial minimum and maximum values
    *min = *max = arr[0];

    // Iterate over the array to find the smallest and largest values
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    *avg = sum / n;
}

int main()
{
    int n, arr[100];

    // Prompt user for the number of values and input values
    printf("Enter number of values: ");
    scanf("%d", &n);
    printf("Enter values one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize variables to store minimum and maximum values
    int min_value, max_value, avg_value;
    find_min_max_avg(arr, n, &min_value, &max_value, &avg_value);

    // Print the minimum and maximum values
    printf("Maximum value is %d\n", max_value);
    printf("Minimum value is %d\n", min_value);
    printf("Average value is %d\n", avg_value);

    return 0;
}
