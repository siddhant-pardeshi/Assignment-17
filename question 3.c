//Write a program to count vowels in a given string

//Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
int main()
{
int i,count=0;
char name[20];
printf("Enter Word to check occurence of vowel:\n");
gets(name);

for(i=0;name[i]!='\0';i++)
{
   if((name[i]=='a') || (name[i]=='e') || (name[i]=='i') || (name[i]=='o') || (name[i]=='u'))
    count++;
}
printf("The word has %d vowels",count);

return 0;
}
