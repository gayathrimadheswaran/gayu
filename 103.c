#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char s[100];
clrscr();
scanf("%s",&s[i]);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>'a'&&s[i]<'z')
{
s[i]=s[i]-32;
}
if(s[i]==' ')
{
s[i]=s[i]-32;
}
}
printf("%c",s);
getch();
}
