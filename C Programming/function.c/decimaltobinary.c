#include<stdio.h>
int main()
{
    int d=0,n,base=1,remainder;
    printf("enter binary no:");
    scanf("%d",&n);
    while(n>0)
    {
        remainder=n%2;
        d=d+remainder*base;
        n=n/2;
        base=base*10;
    }
    printf("%d",d);
    return 0;
}

