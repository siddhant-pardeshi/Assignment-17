//Write a program to calculate the length of the string. (without using builtin method)

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
printf("length of the string is %d",length);

return 0;
}
