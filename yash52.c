#include <stdio.h>
#include <limits.h>
int main(void)
{
    int n, i;
    printf("Enter number of input you want : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The numbers are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    char ch;
    printf("\nEnter your choice from below \n");
    printf("A.Insertion Sort\nB.Selection Sort\nC.Bubble Sort\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'A':
    {
        for (int i = 1; i <= n - 1; i++)
        {
            int j = i;
            while (j >= 1 && arr[j] < arr[j - 1])
            {
                int temp;
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j--;
            }
        }
        printf("Array after sorting \n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    }

    case 'B':
    {
        for (i = 0; i < n - 1; i++)
        {
            int min = INT_MAX;
            int minidx = -1;
            for (int j = i; j < n; j++)
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    minidx = j;
                }
            }
            int temp = arr[minidx];
            arr[minidx] = arr[i];
            arr[i] = temp;
        }
        printf("Array after sorting \n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    }

    case 'C':
    {
        for (i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printf("Array after sorting \n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    }

    default:
        printf("Menu not found!!");
    }

    return 0;
}