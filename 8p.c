#include <stdio.h>
#include<string.h>
#include<conio.h>
void main() 
{
	char s[50];
	int i,len;
	clrscr();
	scanf("%[^\n]s",s);
	len=strlen(s);
	if(s[0]>91)
	{
		s[0]=s[0]-32;
	}
	for(i=0;i<len;i++)
		{
			if(s[i]==' ')
			{
				if(s[i+1]>91)
				{
					s[i+1]=s[i+1]-32;
				}
			}
		}
	printf("%s",s);
	getch();
}
