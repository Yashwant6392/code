#include<stdio.h>
int insertion(int arr[],int n,int item, int pos)
{
    int i;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
    n++;
    return n;
}
int main()
{
    int i,n,pos=2,item;
    printf("enter no. of elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter elements to be inserted\n");
    scanf("%d",&item);
    insertion(arr,n,item,pos);
    printf("after insertion\n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}