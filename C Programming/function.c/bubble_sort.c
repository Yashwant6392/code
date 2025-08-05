#include<stdio.h>
void bubble_sort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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
    bubble_sort(arr,n);
    printf("the sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}