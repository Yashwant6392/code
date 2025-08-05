#include<stdio.h>
int main()
{
    int i,max;
    int arr[6]={3,9,8,5,0,6};
    max=-1;
    for(i=0;i<6;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];   
        }    
    }
    printf("%d ",max);
    return 0;

}