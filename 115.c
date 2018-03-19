#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[10],i,j,temp;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
        for(j=i+1;j<n;j++)
        {
                if(a[i]>a[j])
                               {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                }
        }
}
printf("%d",a[k]);
getch();
}
