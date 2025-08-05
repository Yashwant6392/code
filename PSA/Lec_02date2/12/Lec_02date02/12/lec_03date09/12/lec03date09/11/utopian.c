// // #include<stdio.h>
// // int main()
// // {
// //     int cycle=4,height=0,i;
// //     for(i=0;i<=cycle;i++)
// //     {
// //         if(i%2==0)
// //         {
// //             height=height+1;
// //         }
// //         else
// //         height=height*2;
// //     }
// //     printf("%d",height);
// //     return 0;

// // }

#include <stdio.h>
int utopian(int n)
{
    int i, cycle, height = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            
            height += 1;
        }
        else
        {
            
            height *= 2;
        }
    }
    return height;
}

int main()
{
    int cycle;
    printf("enter no. of cycle:\n");
    scanf("%d",&cycle);
    printf("%d", utopian(cycle));
    return 0;
}
