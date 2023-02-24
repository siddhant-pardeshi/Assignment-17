//Write a C program to sort a string array in ascending order.

#include <stdio.h>
int main()
{
int i,j,length=0;
char name[20],temp;
printf("Enter your name :\n");
fgets(name,20,stdin);

for(i=0;name[i]!='\0';i++)
{
    length++;
}
for(i=0;i<length-1;i++)
{
   for(j=i+1;j<length;j++)
    {
      if(name[i]>name[j])
      {
      temp = name[i];
      name[i]=name[j];
      name[j]=temp;
      }
    }
}
printf("Sorted string is %s",name);

return 0;
}
