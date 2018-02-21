#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
void main()
{
int a,b;
clrscr();
printf("\n values:");
scanf("%d%d",&a,&b);
swap(a,b);
getch();
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
  printf("\n %d %d",a,b);
}
