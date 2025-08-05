#include <stdio.h>
#include <math.h>
// int prime(int n)
// {
//     int count = 0, i;
//     // if(n==1)
//     // {
//     //     return 0;
//     // }
//     for (i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)

//             count++;
//     }
//     if (count == 0)
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int n, a, b;
//     printf("Enter the range:");
//     scanf("%d %d", &a, &b);
//     printf("prime number between%d and %d\n", a, b);
//     for (n = a; n <= b; n++)
//     {
//         if (prime(n) == 1)
//         {
//             printf("%d ", n);
//         }
//     }
//     return 0;
// }

int prime(int n);//prototype
int main()
{
    int n, a, b;
    printf("Enter the range:");
    scanf("%d %d", &a, &b);
    printf("prime number between%d and %d\n", a, b);
    for (n = a; n <= b; n++)
    {
        if (prime(n) == 1)
        {
            printf("%d ", n);
        }
    }
    return 0;
}
int prime(int n)
{
    int count = 0, i;
    if (n == 1)
    {
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)

            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}