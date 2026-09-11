/* Question: Ek menu-driven program likhein jo integers ke array par Insertion Sort, Selection Sort, aur Bubble Sort perform kare. */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, i;
    printf("Enter number of input you want : ");
    scanf("%d", &n);
    int arr[n]; // Variable Length Array
    
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
    scanf(" %c", &ch); // Newline character ko consume karne ke liye space add kiya hai
    
    switch (ch)
    {
    case 'A': // Insertion Sort
    {
        for (int i = 1; i <= n - 1; i++)
        {
            int j = i;
            // Insertion ke liye jagah banane ke liye elements ko shift karein
            while (j >= 1 && arr[j] < arr[j - 1])
            {
                int temp = arr[j - 1];
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

    case 'B': // Selection Sort
    {
        for (i = 0; i < n - 1; i++)
        {
            int min = INT_MAX;
            int minidx = -1;
            // Unsorted hisse (portion) me minimum element dhundhein
            for (int j = i; j < n; j++)
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    minidx = j;
                }
            }
            // Mile hue minimum element ko pehle element ke sath swap karein
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

    case 'C': // Bubble Sort
    {
        for (i = 0; i < n - 1; i++)
        {
            // Array me traverse karein aur agar adjacent elements galat order me hain toh unhe swap karein
            for (int j = 0; j < n - 1 - i; j++) // Pehle se sorted elements ko skip karne ke liye optimized hai
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
