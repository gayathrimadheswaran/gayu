#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n values:");
scanf("%d%d",&a,&b);
a=a^b;
b=b^a;
a=a^b;
printf("\n %d %d",a,b);
getch();
}

