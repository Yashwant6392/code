#include<stdio.h>
void selection_sort(int arr[],int n)
{
    int i,j,temp,min,loc;
    for(i=0;i<n;i++)
    {
        min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                loc=j;
            }
        }
        if(i!=loc)
        {
            temp=arr[i];
            arr[i]=arr[loc];
            arr[loc]=temp;
        }
    }


}
int main()
{
    int i,n;
    printf("enter no. of element\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    printf("the sorted array\n");
    for(i=0;i<n;+i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}