#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1;
clrscr();
printf("\n value:");
scanf("%d",&n);
if(n%2==0)
{
n1=n-2;
}
else
{
n1=n-1;
}
printf("\n result %d",n1);
getch();
}
