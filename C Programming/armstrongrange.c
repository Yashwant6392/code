#include <stdio.h>
#include <math.h>
int main()
{
    int n, a, b, num, c, d, sum;
    printf("enter range");
    scanf("%d%d", &a, &b);
    for (n = a; n <= b; n++)
    {
        c = 0;
        num=n;
        while (num != 0)
        {
            c++;
            num = num / 10;
        }
        num=n;
        sum = 0;
        while (num != 0)

        {
            d = num % 10;
            sum = sum + pow(d, c);
            num = num / 10;
        }
        if (sum == n)
        {
            printf("%d,", n);
        }
    }


    return 0;
}

