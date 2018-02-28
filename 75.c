#include<stdio.h>
#include<conio.h>
void main()
{
char s[10];
int n,i;
clrscr();
printf("\n str:");
scanf("%s",s);
n=strlen(s);
if(n%2==0)
{
s[n/2]='*';
s[(n-2)-1='*');
}
else
{
n/2==0;
}
printf("\n %d",n);
getch();
}
