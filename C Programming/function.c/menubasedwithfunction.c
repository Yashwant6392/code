#include<stdio.h>
#include<math.h>
#include<process.h>
#include<stdlib.h>
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;

}
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
        return 0;
        }
        return 1;
        
    }

}
void table(int n)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\ntable of %d*%d=%d",n,i,n*i);
    }
}
void even_odd(int n)
{
    if(n%2==0)
    printf("\neven no.");
    else
    printf("\nodd no.");
    
}
int main()
{
    int num,choice;
    //char choice;
    while(1)
    {
    printf("\nenter the number:");
    scanf("%d",&num);
    printf("\nenter choice:\n1.factorial\n2.prime\n3.table\n4.even odd\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("\n factorial of %d=%d",num,factorial(num));
        break;
        case 2:
        if(prime(num)==1)
        printf("\nprime no.");
        else
        printf("\n not prime no.");
        break;
        case 3:
        table(num);
        break;
        case 4:
        even_odd(num);
        break;
    default:
        exit(0);
    }
    }
    return 0;


}
