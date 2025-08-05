#include <stdio.h>
#include <math.h>
#include <process.h>
int main()
{
    int i, n, fact, sum, d, num, c;
    int choice;
    while (1)
    {
        printf("\nenter no.");
        scanf("%d", &n);
        printf("\nenter choice//\n1.find factorial //\n2.sum of digit//\n3.check prime //\n4.find table \n5.to check even or odd");
        fflush(stdin);
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            for (i = 1, fact = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            printf("factorial of %d=%d", n, fact);
            break;

        case 2:

            sum = 0;
            num = n;
            while (n != 0)
            {
                d = n % 10;
                sum = sum + d;
                n = n / 10;
            }
            printf("sum of %d is%d", num, sum);
            break;

        case 3:

            c = 0;

            for (i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    c++;
                }
            }
            if (c == 0 && n != 1)
            {
                printf("\n prime");
            }
            else
                printf("\n not prime");
            break;
        case 4:
            // printf("\n table of %d:\n", n);
            for (i = 1; i <= 10; i++)

                printf("\ntable of %d*%d = %d", n, i, n * i);
            break;

        case 5:
            if (n % 2 == 0)
            {
                printf("\neven no");
            }
            else
                printf("\n odd no");
            break;
        default:
            exit(0);
        }
    }
    return 0;
}