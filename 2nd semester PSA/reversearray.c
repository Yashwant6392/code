#include<stdio.h>
void reversearray(int arr[],int start,int end){
    if(start>=end)
    return;
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reversearray(arr,start+1,end-1);

}
int main()
{
    int n,i;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reversearray(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
