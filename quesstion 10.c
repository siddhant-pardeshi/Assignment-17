//Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char hash[256] = {0}; // Initialize array to all zeros
    char name[20];
    int i, length;

    printf("Enter your name:\n");
    gets(name);

    length = strlen(name);

    for (i = 0; i < length; i++)
    {
        hash[name[i]]++;
    }

    for (i = 0; i < 256; i++) // Loop through all possible characters
    {
        if (hash[i] > 0) // If the character appears at least once
        {
            printf("%c appeared %d times\n", i, hash[i]);
        }
    }

    return 0;
}

