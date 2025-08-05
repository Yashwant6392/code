#include<stdio.h>
int main()
{
    int d=0,n,base=1,remainder;
    printf("enter binary no:");
    scanf("%d",&n);
    while(n>0)
    {
        remainder=n%10;
        d=d+remainder*base;
        n=n/10;
        base=base*2;
    }
    printf("%d",d);
    return 0;
}


#include<stdio.h>
int main()
{
    int d=0,n,base=1,remainder;
    printf("enter binary no:");
    scanf("%d",&n);
    while(n>0)
    {
        remainder=n%10;
        d=d+remainder*base;
        n=n/10;
        base=base*5;
    }
    printf("%d",d);
    return 0;
}