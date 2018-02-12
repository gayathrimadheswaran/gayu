#include<stdio.h>
int main()
{
	int n,n1,n2;
	printf("\n value");
	scanf("%d%d",&n,&n1);
	n2=n*n1;
	printf("\n product %d",n2);
	if(n2%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	return 0;
}
