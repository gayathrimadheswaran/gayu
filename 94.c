#include <stdio.h>
#include<conio.h>
void main()
{
int n1,k,i,n[10];
clrscr();
printf("enter N:\n");
scanf("%d",&n1);
printf("enter K:\n");
scanf("%d",&k);
printf("enter the N:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&n[i]);
}
printf(" \n Kth element:%d",n[k-1]);
getch();
}
