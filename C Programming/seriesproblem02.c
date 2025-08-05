#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, i;
    float sum = 0.0;
    printf("enter number of terms");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d/%d!+", i,2*i-1);
        }
        else
        printf("%d/%d!-",i,2*i-1);
        sum=sum+(float)pow(-1,i-1)*i/factorial(2*i-1);
    }
    printf("\nsum of series =%f",sum);
    return 0;
    
}