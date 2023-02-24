//Write a program to convert a given string into lowercase

#include <stdio.h>
int main()
{
int i;
char name[20];
printf("Enter your name :\n");
gets(name);

for(i=0;name[i]!='\0';i++)
{
    if(name[i]>='a' && name[i]<='z')
       name[i]=name[i]+32;
}
printf("Converted string is %s",name);

return 0;
}
