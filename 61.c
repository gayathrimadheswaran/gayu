#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char s[25];
clrscr();
printf("\n value");
scanf("%d",&n);
printf("\n string:");
scanf("%s",s);
for(i=0;i<n;i++)
{
printf("%c",s[i]);
}
getch();
}
