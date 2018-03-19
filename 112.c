#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int a1[50],i,flag=0;
clrscr();
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{
scanf("%d",&a1[i]);
}
for(i=0;i<a;i++)
{
if(a1[i]==b)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
