#include<stdio.h>
#include<conio.h>
void main()
{
int n1,k1,a1[10],b1[5],i,c=0,j=0;
clrscr();
scanf("%d%d",&n1,&k1);
for(i=0;i<n1;i++)
{
scanf("%d",&a1[i]);
}
for(i=0;i<n1;i++)
{
if(a1[i]%2!=0)
{
        b1[j]=a1[i];
        j++;
}
}
for(i=0;i<n1;i++)
{
        if(i=k1)
        {
                printf("%d",b1[i]);
        }
        getch();
}
