#include <stdio.h>
#include <math.h>
int main()
{
    int n, num, c, d, sum;
    printf("enter no");
    scanf("%d", &num);
    c = 0;
    n = num;
    while (num != 0)
    {
        c++;
        num = num / 10;
    }
    n = num;
    sum = 0;
    while (num != 0)

    {
        d = num % 10;
        sum = sum + pow(d, c);
        num = num / 10;
    }
    n = num;
    if (sum == n)
    {
        printf("\n  Armstrong number");
    }
    else
        printf("\n not armstrong number");
    return 0;
}