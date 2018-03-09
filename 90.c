#include<stdio.h>
#include<string.h>
int main()
{
char b[10];
int j;
int o;
scanf("%s",&b[j]);

o=strlen(b);
for(j=0;j<o;j++)
{
    if((b[j]=='0')||(b[j]=='1')||(b[j]=='2')||(b[j]=='3')||(b[j]=='4')||(b[j]=='5')||(b[j]=='6')||(b[j]=='7')||(b[j]=='8')||(b[j]=='9'))
{
printf("%c",b[j]);
}
}
return 0;
}
