#include <stdio.h>
int main()
{
    int a[4][4], i, j, sum_pd = 0, sum_utm = 0, sum_ltm = 0;
    printf("enter the elements of matrix");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == j)
            {
                sum_pd += a[i][j];
            }
            else if (i < j)
            {
                sum_utm += a[i][j];
            }
            else
            {
                sum_ltm+=a[i][j];
            }
        }
    }
    printf("\nsum of the principal diagonal=%d\n",sum_pd);
    printf("\nsum of the lower triamgular matrix=%d\n",sum_ltm);
    printf("\nsum of the upper trianguar matrix=%d\n",sum_utm);

}