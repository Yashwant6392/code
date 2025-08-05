#include <stdio.h>
int main()
{
    int n, a, b, i, sum = 0, num;
    printf("enter range.");
    scanf("%d %d", &a, &b);
    for (n = a; n <= b; n++)
    {
        num = n;
        for (i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (n == sum)
        {
            printf("%d,", n);
        }
    }
    return 0;
}