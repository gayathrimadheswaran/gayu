#include<stdio.h>
#include<conio.h>
void main()
{
int a,c=0;
clrscr();
printf("enter an integer:");
scanf("%d",&a);
while(a!=0)
{
a/=10;
++c;
}
printf("the value is:%d",c);
getch();
}
