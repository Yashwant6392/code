#include<stdio.h>
int main()
{
    int num,n,d,rev=0;
    printf("enter number");
    scanf("%d",&num);
    n=num;
    while (num!=0)

    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if (n==rev)
    {
        printf("\n palindrome number");
        
    }
    else
    {
        printf("\n not palindrome number");
        
    }
    return 0;
    
    
}