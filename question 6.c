//Write a program to reverse a string.

#include <stdio.h>
int main()
{
int i,length=0;
char name[20];
printf("Enter your name :\n");
gets(name);

for(i=0;name[i]!='\0';i++)
{
    length++;
}

for(i=length-1;i>0;i--)
{
printf("%c",name[i]);
}
return 0;
}
