#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[30];
	int i,x;
	scanf("%s",s);
	x=strlen(s);
	for(i=0;i<x;i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
		{
			s[i]='+';
		}
	}
	for(i=x;i>=0;i--)
	{
		if(s[i]!='+')
		{
			printf("%c",s[i]);
		}
	}
 
	getch();
}
