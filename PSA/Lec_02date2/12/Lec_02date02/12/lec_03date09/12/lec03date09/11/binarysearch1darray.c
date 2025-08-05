#include <stdio.h>
int main()
{
    int i, n,key;
    printf("enter size of array");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("elements %d ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nthe 1d array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n Enter the key to search: ");
    scanf("%d", &key);
    int low = 0, high = n - 1, mid;
    int found = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            found = mid;
            break;
        }
        if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (found != -1)
        printf("Element is present at index %d\n", found);
    else
        printf("Element is not present in array\n");

    return 0;
}
