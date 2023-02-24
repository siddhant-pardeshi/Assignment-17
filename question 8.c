//Write a program in C to copy one string to another string.

#include <stdio.h>
int main()
{
int i,length=0;
char copy[20]={0};
char name[20];
printf("Enter string to copy :\n");
gets(name);

for(i=0;name[i]!='\0';i++)
{
    length++;
}
for(i=0;i < length ;i++)
{
    copy[i]=name[i];
}
for(i=0;i < length ;i++)
{
    printf("%c",copy[i]);
}


return 0;
}
