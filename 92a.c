#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[40],i,sum=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
getch();
}
