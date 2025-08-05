// #include <stdio.h>
// #include <math.h>
// int isarmstrong(int n);

// int main()
// {
//     int a, b, n;
//     printf("Enter range:");
//     scanf("%d %d", &a, &b);
//     printf("armstrong n. between %d and %d:\n", a, b);
//     for (n = a; n <= b; n++)
//     {
//         if (isarmstrong(n) == 1)
//         {
//             printf("%d ", n);
//         }
//     }
// }
// int isarmstrong(int n)
// {
//     int c = 0, d;
//     int num = n;
//     while (num != 0)
//     {
//         c++;
//         num = num / 10;
//     }
//     num = n;
//     int sum = 0;
//     while (num != 0)
//     {
//         d = num % 10;
//         sum = sum + pow(d, c);
//         num = num / 10;
//     }
//     if (sum == n)
//         return 1;
//     else
//         return 0;
// }


#include<stdio.h>
int factorial(int n);
int ncr(int n,int r);
int main()
{
    int n,i,j,k;
    printf("enter no. of rows:\n");
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
}
int factorial(int n)
{
    int fact=1,i;
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