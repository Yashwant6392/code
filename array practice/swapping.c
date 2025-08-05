#include <stdio.h>
#include<limits.h>
int main()
{
    int i,product=1;
    int max=INT_MIN;
    int arr[6] = {1,2,3,4,5,6};
    for (i = 0; i < 6; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
     printf("%d",max);  
    
        return 0;
}

// #include<stdio.h>
// int main()
// {
//     int i;
//     int arr[6]={98,67,23,32,78,19};
//     for(i=0;i<6;i++)
//     {
//         if(arr[i]<35)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
