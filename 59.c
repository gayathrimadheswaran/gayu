#include<stdio.h>
#include<conio.h>
void main()
{
int a[14],max,i;
clrscr();
printf("\n array elmnts");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<=9;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n rsult is %d",max);
getch();
}
