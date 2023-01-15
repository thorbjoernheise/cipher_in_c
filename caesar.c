#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Check if the number of command-line arguments is exactly 2 (program name and key)
    if (argc != 2)
    {
        printf("Error: Invalid number of arguments\n");
        return 1;
    }
    // Convert the key from a string to an int
    int k = strtol(argv[1], NULL, 10);
    if (k < 0) {
        k = abs(k);
        k = 26-k;
    }
    // Iterate through each character of the key
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // Check if the character is a decimal digit
        if (!isdigit(argv[1][i]) && argv[1][0] != '-')
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Prompt the user for Text
    string plaintext = get_string("Text: ");
    printf("ciphertext: ");
    // Iterate through each character of the plaintext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // Check if the character is alphabetical
        if (isalpha(plaintext[i]))
        {
            // Check if the character is uppercase
            if (isupper(plaintext[i]))
            {
                // "Rotate" the uppercase character by k positions and preserve case
                printf("%c", 'A' + (plaintext[i] - 'A' + k) % 26);
            }
            else
            {
                // "Rotate" the lowercase character by k positions and preserve case
                printf("%c", 'a' + (plaintext[i] - 'a' + k) % 26);
            }
        }
        else
        {
            // Print non-alphabetical characters unchanged
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    // Exit the program and return 0
    return 0;
}
