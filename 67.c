#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n values:");
scanf("%d",&n);
n+=1;
while(n%10!=0)
{
n=n+1;
}
printf("%d",n);
getch();
}
