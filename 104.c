#include<stdio.h>
#include<conio.h>
void main()
{
int b,c,i,d=1;
clrscr();
printf("values:");
scanf("%d%d",&b,&c);
for(i=0;i<c;i++)
{
d=d*b;
}
printf("%d",d);
getch();
}
