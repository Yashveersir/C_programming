#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[1000];
    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    int word_count = 0, max_word_length = 0, current_word_length = 0;
    char *ch = str;
    char *longest_word = NULL;

    // Count words and find the longest word
    while (*ch != '\0')
    {
        if (isalpha((unsigned char)*ch))
        {
            current_word_length++;
            if (current_word_length > max_word_length)
            {
                max_word_length = current_word_length;
                longest_word = ch - current_word_length + 1;
            }
        }
        else if (isspace((unsigned char)*ch) || *ch == '\0')
        {
            if (current_word_length > 0)
            {
                word_count++;
                current_word_length = 0;
            }
        }
        ch++;
    }

    printf("Number of words: %d\n", word_count);
    printf("Length of longest word: %d\n", max_word_length);

    // Print the longest word
    if (longest_word != NULL)
    {
        printf("Longest word: ");
        for (int i = 0; i < max_word_length; i++)
        {
            printf("%c", longest_word[i]);
        }
        printf("\n");
    }
    // Reverse the string
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}