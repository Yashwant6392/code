#include <stdio.h>
#include <math.h>
int main()

{

    int a, b, i, n, count = 0;
    printf("enter range.");
    scanf("%d %d", &a,&b);
    for (n = a; n <= b; n++)
    {
        for (i = 2, count = 0; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && n != 1)
        {
            printf("%d,", n);
        }
    }
    return 0;
}
