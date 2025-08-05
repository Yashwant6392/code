#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,row,col;
    printf("enter no. of row\n");
    scanf("%d",&row);
    printf("enter no. of column:\n");
    scanf("%d",&col);
    int res[row][col],matrix1[row][col],matrix2[row][col];
    printf("enter the element of the matrix1\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("matrix1 is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("enter the element of the matrix2\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("matrix2 is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            res[i][j]=(matrix1[i][j]+matrix2[i][j]);
        }
    }
    printf("resultant matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}