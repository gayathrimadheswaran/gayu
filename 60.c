#include<stdio.h>
#include<conio.h>
void main()
{
int a=-1,b=1,c=0,n,i;
clrscr();
printf("\nvalue:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
printf("\n %d",c);
a=b;
b=c;
}
getch();
}

