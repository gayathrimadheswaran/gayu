#include<stdio.h>
#include<string.h>
int main()
{
char b[10];
int j;
scanf("%s",&b[j]);
printf("even position\n");
for(j=0;b[j]!='\0'; j++)
{
if(j%2!=0)
{
printf("%c\n",b[j]);
}
}
printf("odd position\n");
for(j=0;b[j]!='\0';j++)
{
if((j%2==0))
{
printf("%c\n",b[j]);
}
}
return 0;
}
