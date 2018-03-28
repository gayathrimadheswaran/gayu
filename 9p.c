#include <stdio.h>
#include<conio.h>
void main()
{
	int mo,ra,i,j,c=0,f=1;
	scanf("%d",&mo);
	scanf(" %d",&ra);
	if(mo==2)
	{
		c++;
	}
	for(i=l;i<=ra;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=0;
				break;
				}
			}
			if(f==1)
			{
				c=c+1;
			}
		}
printf("\n%d",c);
	}
