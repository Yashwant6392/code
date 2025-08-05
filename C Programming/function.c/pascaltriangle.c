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
int ncr(int n,int r)
{
    int c=factorial(n)/(factorial(r)*factorial(n-r));
    return c;
}
int main()
{
    int i,j,k,n;
    printf("enter no. of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf(" ");

        }
        for(j=0;j<=i;j++)
        {
            printf("%d ",ncr(i,j));
        }
        printf("\n");
    }
    return 0;
}