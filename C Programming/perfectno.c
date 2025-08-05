#include<stdio.h>
int main()
{
    int n,i,sum=0,num;
    printf("enter no.");
    scanf("%d",&n);
    num=n;
    for ( i = 1; i <=n/2; i++)
    {
       if (n%i==0)
       {
        sum=sum+i;
        
       }
    }   
       if (num==sum)
       {
        printf("\n perfect no.");
       }
       else
       printf("\n not perfect no.");   
       
    
    return 0;
    
}