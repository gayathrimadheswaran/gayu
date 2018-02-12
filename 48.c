#include<stdio.h>
int main()
{
	int a[5],sum=0,i,m,avg;
	printf("\n enter the num");
	scanf("%d",&m);
	printf("\n array elements");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		}
for(i=0;i<m;i++)
{
sum=sum+a[i];
}
	avg=sum/m;
	printf("\n result is %d",avg);
	return 0;

	}

