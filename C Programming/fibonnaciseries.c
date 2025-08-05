// WAP TO INPUT N AND PRINT THE NTH TERM OF FIBONACCI SERIES
// #include<stdio.h>
// int main()
// {
//     int a=0,b=1,next,n,i;
//     printf("enter no.");
//     scanf("%d",&n);
//     for(i=1;i<=(n-2);i++)
//     {
//         next=a+b;
//         a=b;
//         b=next;

//     }
//     printf("\n nth term =%d",next);
//     return 0;
// }

// WAP TO INPUT A NO. AND PRINT ITS OF FIBONACCI SERIES

// #include <stdio.h>
// int main()
// {
//     int n, i, a = 0, b = 1, next;
//     printf("enter no:");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         if (i == 1)
//         {
//             printf("%d ", a);
//         }

//         else if (i==2)
//         {
//             printf("%d ", b);
//         }
//         else
//         {
//             next = a + b;
//             printf("%d ", next);

//             a = b;
//             b = next;
//         }
       
//     }
//     return 0;
// }


// WAP TO INPUT A NO. AND PRINT ITS SUM OF FIBONACCI SERIES
#include<stdio.h>
int main()
{
    int i,a=0,b=1,n,sum=0,next;
    printf("Enter number");
    scanf("%d",&n);
    printf("\n fibonnacci series:\n");
    for ( i = 1; i <=n; i++)
    {
       if (i==1)
       {
        printf("%d ",a);
        sum=sum+a;
        
       }
       else if(i==2)
       {
        printf("%d ",b);
        sum=sum+b;
       }
       else
       {
       next=a+b;
       printf("%d ",next);
       sum=sum+next;
       a=b;
       b=next;
       }
       
      
       
    }
    printf("sum = %d ",sum);
    return 0;
    
}