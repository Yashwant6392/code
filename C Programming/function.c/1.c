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
    int n,i,j,k;
    printf("enter no. of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d ",ncr(i,k));
        }
        printf("\n");
    }
    return 0;
}


