#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[10];
int i,temp,n1;
gets(s);
n1=strlen(string);
if(n1%2==0)
{
for(i=0;i<n;i+=2)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
puts(s);
}
else
{
for(i=0;i<n-1;i+=2)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
puts(s);
}
return 0;
}
