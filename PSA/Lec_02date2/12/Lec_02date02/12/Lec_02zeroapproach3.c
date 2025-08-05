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
    int j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
    printf("Array after moving zeroes to the end: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}


