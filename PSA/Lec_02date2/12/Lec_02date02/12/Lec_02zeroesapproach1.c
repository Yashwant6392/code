//USING TEMP VARIABLE
//T.C=0(N)
//S.C=0(N)

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
    int temp[n],j=0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)                                                                       
        {
            temp[j++] = arr[i];
        }
    }
    while (j < n)
    {
        temp[j++] = 0;
    }
    printf("Array after moving zeroes at end\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
       
    }
    printf("\n");
    return 0;
}