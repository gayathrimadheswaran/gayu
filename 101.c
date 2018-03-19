#include <stdio.h>
#include<conio.h>
void main()
{
    int i,a,c,count=0,b;
    clrscr();
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the last character");
    scanf("%d",&b);
    for( i=0;i<=b;i++)
    {
    while(a!=0)
    {
        c=a%10;
        a=a/2;
        count=count+c;
    }
        printf("%d",count);
    }
   getch();
}
