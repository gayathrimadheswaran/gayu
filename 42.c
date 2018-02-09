
#include<stdio.h>
#include<string.h>
int main()
{
	int n1,n2;
	char s1[25],s2[25];
	printf("\n string 1");
	scanf("%s",s1);
	printf("\n string 2");
	scanf("%s",s2);
	n1=strlen(s1);
	n2=strlen(s2);
	if(n1>n2)
	{
		printf("\n%s",s1);
	}
	else if(n2>n1)
	{
		printf("\n%s",s2);
	}
	else
	{
		printf("\n%s",s2);
	}
	return 0;
}
