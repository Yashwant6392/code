#include <stdio.h>
int main()
{
    int i, n, j = 0;
    printf("enter elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Elements of array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("elemets %d ", i);
        scanf("%d", &arr[i]);
    }
    printf("the leaders of an array is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                break;
            }
        }
        if (j == n)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}