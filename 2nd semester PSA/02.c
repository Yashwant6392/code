#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter the order of the matrix");
    scanf("%d %d",&n,&n);
    int arr[n][n];
    int temp[n][n];
    printf("enter the element of the matrix");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n elements of the matrix is:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            temp[j][i]=arr[i][j];
        }
        printf("\n");
    }
    printf("transpose of matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",temp[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][n - 1 - j];
            arr[i][n - 1 - j] = temp;
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}