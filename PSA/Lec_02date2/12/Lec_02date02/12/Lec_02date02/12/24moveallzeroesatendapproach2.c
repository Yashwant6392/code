//WITHOUT USING VARIABLE
//T.C=O(N)
//S.C=0(1)

#include <stdio.h>
int main()                                                                 
{
    int i, n;
    printf("enter elements");
    scanf("%d", &n);
    int arr[n];
    printf("Elements of an array is \n");
    for (i = 0; i < n; i++)
    {
        printf("elements %d ", i);
        scanf("%d", &arr[i]);
    }
    int j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)                                                                       
        {
            arr[j++] = arr[i];
        }
    }
    while (j < n)
    {
        arr[j++] = 0;
    }
    printf("Array after moving zeroes at end\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
       
    }
    printf("\n");
    return 0;
}

