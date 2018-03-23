#include <stdio.h>
#include<string.h>
#include<conio.h>
void main() 
{
	char s1[50],s2[50];
	int i,j,f=1,x,y;
	clrscr();
	scanf("%s %s",s1,s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	if(l1==l2)
	{
	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l2;j++)
		{
			x=s1[i]-s1[j];
			y=s2[i]-s2[j];
			if(x==y)
			{
				f=0;
			}
			else
			{
				f=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(f==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

	getch();
}
