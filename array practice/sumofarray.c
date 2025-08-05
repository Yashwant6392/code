
#include<stdio.h>
int main()
{
    int i,sum=0;
    int arr[5]={4,1,6,3,9};
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of array is %d",sum);
    return 0;

}