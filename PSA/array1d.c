#include <stdio.h>
int main()
{
    int n, i;
    printf("enter no. of elements:");
    scanf("%d", &n);
    int arr[n];
    printf(" elements of array:\n ");
    for (i = 0; i < n; i++)
    {
        printf("elements %d ", i);
        scanf("%d",&arr[i]);
    }
    printf("the 1d array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

