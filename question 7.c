//Write a program in C to count the total number of alphabets, digits and special characters in a string

#include <stdio.h>

int main() {
    int i, alphabets = 0, digitcount = 0, specialchar = 0;
    char name[10];

    printf("Enter a word to check the occurrence of alphabets, digits, and special characters:\n");
    gets(name);

    for (i = 0; name[i] != '\0'; i++) {
        if (('a' <= name[i] && name[i] <= 'z') || ('A' <= name[i] && name[i] <= 'Z')) {
            alphabets++;
        } else if ('0' <= name[i] && name[i] <= '9') {
            digitcount++;
        } else {
            specialchar++;
        }
    }

    printf("The word has %d alphabets, %d digits, and %d special characters.\n", alphabets, digitcount, specialchar);

    return 0;
}

