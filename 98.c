#include<stdio.h>
#include<conio.h> 
void main() 
{
int n1,a[30],i;
clrscr();
scanf("%d",&n1);
for(i=1;i<=n1;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n1;i++)
{
if(i!=a[i])
{
printf("\n%d",i);
break;
}
}
getch();
}
