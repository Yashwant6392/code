#include<stdio.h>
int deletion(int arr[],int n,int pos)
{
    int i,item;
    item=arr[pos-1];
    for(i=pos;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    n--;
    return n;
}
int main()
{
    int i,n,pos=2;
    printf("enter no. of elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    deletion(arr,n,pos);
    printf("after deletion\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}