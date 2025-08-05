
//OPTIMIZE   TO REDUCE COMPLEXITY
//T.C=O(n)
//S.C=O(1)
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Elements of array is:\n");
    for(i=0;i<n;i++)
    {
        printf("elemets %d ",i);
        scanf("%d",&arr[i]);

    }
    printf("the leaders of an array is:\n");
    int max=arr[n-1];
    printf("%d ",max);

    for(i=n-2;i>=0;i--)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            printf("%d ",max);
        } 
    }
    printf("\n");
    return 0;

}



