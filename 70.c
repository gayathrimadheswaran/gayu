#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,n2,n3;
clrscr();
printf("\nvalues:");
scanf("%d",&n);
n1=n/2;
if(n1%2==0)
{
n3=2*n1;
printf("\n %d",n3);
}
else
{
n2=n1-1;
n3=2*n2;
printf("\n %d",n3);
}
getch();
}
