#include<stdio.h>
int main()
{
	int a[15],i,n,sum=0;
	printf("\n values");
	scanf("%d",&n);
	      printf("\n array elmts");
	      for(i=0;i<n;i++)
	      {
		      scanf("%d",&a[i]);
	      }
	      for(i=0;i<n;i++)
	      {
		      sum=sum+a[i];
	      }
		      printf("\nresult %d",sum);
		      return 0;
	      }
