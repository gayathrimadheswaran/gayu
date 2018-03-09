#include<stdio.h>
#include<conio.h>
void main()
{
int m,j,count=0;
clrscr();
scanf("%d",&m);
for(j=2,j<=n/2;j++)
{
if(m%j==0)
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
