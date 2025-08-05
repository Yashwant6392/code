#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,row,col;
   
    printf("enter no. of row\n");
    scanf("%d",&row);
    printf("enter no. of column:\n");
    scanf("%d",&col);
    int transpose[row][col],matrix1[col][row];
    printf("enter the element of the matrix1\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", &matrix1[i][j]);
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
   
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=matrix1[i][j];
        }
    }
    printf("transpose of matrix:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}