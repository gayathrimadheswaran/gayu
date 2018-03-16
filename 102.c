#include <stdio.h>
int main()
{
    int l;
    printf("number");
    scanf("%d",&l);
    while(l%2==0)
    {
        l=l/2;
    }
        printf("%d",l);
    return 0;
}
