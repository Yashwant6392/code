// #include<stdio.h>
// int main()
// {
//     int n,d,sum=0,n1;
//     printf("enter no.");
//     scanf("%d",&n);
//     while(n1>9)
//     {
//         int sum=0;
//     while(n!=0)
//     {
//         d=n%10;
//         sum=sum+d;
//         n=n/10;
//     }
//     printf("\n%d",sum);
//     n1=sum;
//     } 
//     printf("%d",sum);
//     return 0;
// }



// #include<stdio.h>
// int  main()
// {
//     int i;
//     int arr[7]={2,4,7,3,9,6,8};
//     for(i=6;i>=0;i--)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

#include<stdio.h>
int  main()
{
    int i,j;
    int arr[7]={2,4,7,3,9,6,8};
    while(i<=j)
    {
    for(i=0;i<7;i++)
    for(j=i+1;j<i-j-1;j++)
    {
       if(arr[i]>arr[j+1])
       {
       int temp=arr[i];
       arr[i]=arr[j+1];
       arr[j+1]=temp;
       }
    }
    printf("%d",arr[i]);
    }
    return 0;
}