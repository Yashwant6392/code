#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,rem,gcd;
    int n1,n2;
    n1=a;
    n2=b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    while (1)
    {
        rem=a%b;
        if (rem==0)
        {
            gcd=b;
            break;   
        }
        a=b;
        b=rem;
        
    }
    printf("\n gcd of %d and %d =%d",n1,n2,gcd);
    return 0;
    
}

// 2ND APPROACH
#include<stdio.h>
int main()
{
    int min,a,b,i,gcd;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    min=(a<b)?a:b;
    printf("minimum is %d",min);
    for(i=min;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
            printf("\n the gcd of %d and%d is %d",a,b,gcd);
            break;
        }
        


        
    }
    return 0;
    
}