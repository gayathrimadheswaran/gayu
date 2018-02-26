#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
clrscr();
printf("\n value:");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
flag=1;
}
}
if(flag==0)
{
printf("\yes");
}
else
{
printf("\n no");
}
getch();
}

