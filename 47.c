#include<stdio.h>
int main()
{
	int a[5],i,m;
	int lar,small;
	printf("\n enter the num");
	scanf("%d",&m);
	printf("\n array elements");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		}
for(i=0;i<m;i++)
{
	lar=a[0];
	if(lar>a[i])
	{
		printf("\n greatest no %d",lar);
	}
}
for(i=0;i<m;i++)
{
	small=a[0];
	if(small<a[i])
	{
		printf("\n smallest no %d",small);
	}
}
return 0;
}
