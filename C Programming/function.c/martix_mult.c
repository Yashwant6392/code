#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, sum, i, j, k;
    printf("enter order of first matrix\n");
    scanf("%d %d", &r1, &c1);
    printf("enter order of second matrix\n");
    scanf("%d %d", &r2, &c2);
    int a[r1][c1], b[r2][c2], c[r1][c2];
    if (c1 == r2)
    {
        printf("enter the elements of the first matrix\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
            printf("\n");
        }
        printf("enter the elements of the second matrix\n");

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                sum = 0;
                for (k = 0; k < c2; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
        printf("\n resultant matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication is not possible");
    }
    return 0;
}