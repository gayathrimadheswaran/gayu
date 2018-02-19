#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[10],n,i,count;
clrscr();
printf("\n enter string:");
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
{
count=1;
}
else if(s[i]>=0&&s[i]<=9)
{
count=1;
}
else if(count==1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
getch();
}
