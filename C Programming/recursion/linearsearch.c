#include<stdio.h>
int main()
{
    int n,i,flag=0,key;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter key to search:\n");
    scanf("%d",&key);
    int arr[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("elements of the array found: at index %d\n",i);
            flag++;
        }

    }
    if(flag==0)
    {
        printf("elements not found\n");
    }
    return 0;
}