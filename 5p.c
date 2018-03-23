#include <stdio.h>
#include<conio.h>
void main() 
{
int a,i,res,a1[20],t=0;
char r[10];
clrscr();
scanf("%s",r);
n=strlen(r);
for(i=0;i<a;i++)
{
if(r[i]=='I')
a[i]=1;
else if(r[i]=='V')
a[i]=5;
else if(r[i]=='X')
a[i]=10;
else if(r[i]=='L')
a[i]=50;
else if(r[i]=='C')
a[i]=100;
else if(r[i]=='D')
a[i]=500;
else
printf("\nINVALID");
}
for(i=0;i<a;i+=2)
{
if(a1[i]<a1[i+1])
{
res=a1[i+1]-a1[i];
}
else 
{
res=a1[i]+a1[i+1];
}
t=res+t;
}
printf("\n%d",t);
getch();
}
