#include <stdio.h>
int main()
{
    int row, col, i, j, n;
    printf("enter no. of row\n");
    scanf("%d", &row);
    printf("enter no. of column\n");
    scanf("%d", &col);
    int mat1[row][col];
    printf("first matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("elements %d %d ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    int mat2[row][col];
    printf("second matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("elements %d %d ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    int res[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("sum of the matrices\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}