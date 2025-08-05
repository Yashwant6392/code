#include<stdio.h>
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,i;
    float sum=0.0;
    printf("enter number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d/%d!+",i,i);
        sum=sum+(float)i/factorial(i);
    }
    printf("\n Sum of series=%f",sum);
    return 0;
}