//Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
int main()
{
int i,count=0;
char name[20];
printf("Enter Word to check occurence of letter 'a' :\n");
gets(name);

for(i=0;name[i]!='\0';i++)
{
   if(name[i]=='a')
    count++;
}
printf("Letter 'a' is repeated %d times",count);

return 0;
}
