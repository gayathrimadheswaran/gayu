#include <stdio.h>
#include<conio.h>
void main()
	{
  int a,b,i,count=0;
	scanf("%d %d",&a,&b);
	int a1[10];
	for(i=0;i<a;i++)
	{
		scanf("%d",&a1[i]);
	}
	for(i=0;i<a;i++)
	{
		if(a1[i]==b)
		{
			
			count=count+1;
		
		}
		
	}
	printf("%d",count);
	getch();
  }
