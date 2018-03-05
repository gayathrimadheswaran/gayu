#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,re,l,g,m,n;
scanf("%d%d",&x,&y);
m=x;
n=y;
do
{
re=x%y;
if(re==0)
break;
x=y;
y=re;
}while(re!=0);
g=y;
l=(m*n)/g;
printf("%d",l);
getch();
}
