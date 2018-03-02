#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,rev;
clrscr();
printf("\n val:");
scanf("%d",&n);
while(n!=0)
{
rem=rem%`10;
rev=(rev*10)+n;
n=n/10;
}
n=rev;
while(n!=0)
{
rem=n%10;
if(n%2==1)
{
printf("\n %d",rem);
}
n=n/10;
}
getch();
}
