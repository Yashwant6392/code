#include<stdio.h>
int main()
{
    int i;
    int arr[8]={1,2,3,4,5,6,7,8};
    for(i=0;i<8;i++)
    {
        if(i%2==0)
        {
            arr[i]+=10;
        }
        else
        arr[i]*=2;

    }
    for(i=0;i<8;i++)
    {
    printf("%d ",arr[i]);
    }


}