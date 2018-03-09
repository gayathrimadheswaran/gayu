#include<stdio.h>

int main()
{
    char s[10];
    int i,j,a,temp;
    scanf("%d",a);
    
    for(i=0;i<a;i++)
    {
        for(j=i;j<a;j++)
        {   if(s[i]>s[j])
            {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%c",s[i]);
    }
}
