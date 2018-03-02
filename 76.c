#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
clrscr();
scanf("%d",&n);
for(i=2,i<=n/2;i++)
{
if(n%i==0)
{
count=1;
break;
}
}
if(count==0)
{
printf("\nno");
}
else
{
printf("\n yes");
}
getch();
}
