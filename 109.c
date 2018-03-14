#include <stdio.h>
int mini(int a[50],int n1);
int main(void) 
{
int a[50];
int i,res,n1;
printf("no of elements");
scanf("%d",&n1);
printf("\narray\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
printf("%d ",a[i]);
}
res=mini(a,n1);
printf("\n%d",res);
return 0;
}
int mini(int a[50],int n1)
{
int i,mini=a[0];
for(i=1;i<n1;i++)
{
scanf("%d",&a[i]);
if(a[i]<mini)
{
mini=a[i];
}
}
return (mini);
}	
