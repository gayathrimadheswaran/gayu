#include<stdio.h>
#include<conio.h>
void main()
{
	char m[10],n[10];
	int x,e,y,i=0;
	printf("Enter 2 strings");
	scanf("%s %s",m,n);
	x=strlen(m);
	y=strlen(n);
	if(x==y)
	{   do
	    {
	
		if(m[i]!=n[i])
		e++;
		i++;
	    }while(i<x);
	}
	if(e==1)
	printf("Yes");
	else
	printf("No");
}
