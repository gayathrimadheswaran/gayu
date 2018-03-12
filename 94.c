#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,a1[10],i;
clrscr();
printf("enter numbers");
scanf("%d%d",&n,&m);
printf("enter n numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a1[i]);
}
for(i=0;i<n;i++)
{
if(a1[i]==a1[m])
{
printf("%d",a1[i]);
}
}
getch();
}
