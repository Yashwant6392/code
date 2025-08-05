#include<stdio.h>
int main()
{
    int i,count=0;
    int arr[8]={7,5,3,9,8,6,2,4};
    int a=2;
    for(i=0;i<8;i++)
    {
        if(arr[i]>a)
        {
            count++;
        }

    }
    printf("%d",count);
    return 0;

}