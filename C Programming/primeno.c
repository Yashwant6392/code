#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,count=0;
    printf("enter no.");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            count++;

        }
    }    
        if (count==0&&n!=1)
        {
            printf("\n prime");
           
        }
        else
        printf("\n not prime");
    return 0;
}
