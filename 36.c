#include<stdio.h>
int main()
{
int count=0;
char s;
printf("\n enter string");
scanf("%s",&s);
if(s==","||s=="."||s=="$"||s=="*")
{
count++;
}
return 0;
}
