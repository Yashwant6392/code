//#include<stdio.h>
// int factorial(int n)
// {
//     int i,fact=1;
//     for(i=1;i<=n;i++)
//     {
//     fact=fact*i;
//     }
//     return fact;
// }
// int main()
// {
//     int n,r,ncr;
//     printf("enter the value of n and r to find nCr \n");
//     scanf("%d %d",&n,&r);
//     ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     printf("\n ncr=%d",ncr);

// }

// #include<stdio.h>
// int factorial(int n);   //prototype
// int main()
// {   
//     int n,r,ncr;
//     printf("enter the value of n and r to find nCr \n");
//     scanf("%d %d",&n,&r);
//     ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     printf("\n ncr=%d",ncr);
// }
// int factorial(int n){
// int i,fact=1;
// for(i=1;i<=n;i++)
// {
//     fact=fact*i;
    
// }
// return fact;
// }


#include<stdio.h>
double factorial(int n);   //prototype
int main()
{   
    int n,r;
    double ncr;
    printf("enter the value of n and r to find nCr \n");
    scanf("%d %d",&n,&r);
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("\n ncr=%lf",ncr);
}
double factorial(int n){
int i,fact=1.0;
for(i=1;i<=n;i++)
{
    fact=fact*i;
    
}
return fact;
}