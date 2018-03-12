#include<stdio.h>
#include<conio.h>
void main()
{
int n1,a1[40],i,pro=0;
clrscr();
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
scanf("%d",&a1[i]);
}
for(i=0;i<n1;i++)
{
pro=pro*a1[i];
}
printf("%d",pro);
getch();
}
