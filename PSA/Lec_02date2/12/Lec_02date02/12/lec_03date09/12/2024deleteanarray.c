#include <stdio.h>
int main()
{
    int i, n, position;
    printf("enter no. of rows\n");
    scanf("%d", &n);
    int arr[n];
    printf("elements of the array is\n");
    for (i = 0; i < n; i++)
    {
        printf("elements %d ", i);
        scanf("%d", &arr[i]);
    }
    printf("the 1d array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nenter the element to delete\n");
    scanf("%d", &position);
    if (position < 0 || position >= n)
    {
        printf("invalid syntax\n");
        return 1;
    }
    for (i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("modified array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}