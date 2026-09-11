/* Question: Ek program likhein jo integers ke array ko read kare aur unhe reverse order me ek string ke sath beech me print kare. */

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

// Integers ke array ko read karne ke liye function
void readIntArray(int arr[], int size) {
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Ek character string ko read karne ke liye function
void readString(char str[]) {
    printf("Enter a character string: ");
    scanf(" %[^\n]", str); // Spaces ke saath string ko read karein
}

// Integers ko reverse order me ek string ke sath beech me print karne ke liye function
void printIntegersWithString(int arr[], int size, char str[]) {
    printf("Integers in reverse order with '%s' in between:\n", str);
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" %s ", str);
        }
    }
    printf("\n");
}

int main() {
    int numIntegers;
    char separator[MAX_SIZE];
    int integerArray[MAX_SIZE];

    printf("Enter the number of integers: ");
    scanf("%d", &numIntegers);

    readIntArray(integerArray, numIntegers);
    readString(separator);

    printIntegersWithString(integerArray, numIntegers, separator);

    return 0;
}
