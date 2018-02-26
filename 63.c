#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int i,count=1,n;
clrscr();
printf("\n string:");
scanf("%d",&s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]==' ')
{
count=count+1;
}
}
printf("%d",count);
getch();
}
