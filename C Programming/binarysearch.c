#include<stdio.h>
int main()
{
    int n,i,key;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter key to search:\n");
    scanf("%d",&key);
    int arr[n];
    printf("enter the elements of the array in ascending order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int beg=0,end=n-1,mid,flag=0;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid ]==key)
        {
            
            printf("elements found %d at index %d\n",key,mid);
            flag=1;
            break;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }   
    }
    if(flag==0)
    {
        printf("elements not found\n");
    }
    return 0;
}
