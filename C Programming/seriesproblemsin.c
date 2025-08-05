#include<stdio.h>
#include<math.h>
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
    int i,n;
    float sum=0.0,x;
    printf("enter no. of terms\n");
    scanf("%d",&n);
    printf("enter angle\n");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        sum=sum+(float)pow(-1,i-1)*pow(x,2*i-1)/factorial(2*i-1);
    }
    printf("\nsum of series=%f",sum);
    return 0;
}