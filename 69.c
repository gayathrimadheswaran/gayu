#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,o;
clrscr();
printf("\n values");
scanf("%d%d",&n,&m);
o=n-m;
printf("\n %d",o);
if(o%2==0)
{
printf("\n even");
}
else
{
printf("\n odd");
}
getch();
}
