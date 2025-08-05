#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*ptr,n1,n2,sum=0;
    printf("enter no. of n1 students ");
    scanf("%d",&n1);
     ptr=(int*)calloc(n1,sizeof(int));
    for(i=0;i<n1;i++)
    {
        printf("\n enter the marks");
        scanf("%d",(ptr+i));
    }
    printf("\n how many more more students? ");
    scanf("%d",&n2);
    ptr=(int*)realloc(ptr,(n1+n2)*sizeof(int));
    for(i=n1;i<(n1+n2);i++)
    {
        printf("\n enter marks");
        scanf("%d",(ptr+i));

    }
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d",*(ptr+i));
        sum=sum+*(ptr+i);
    }
    printf("\n avg =%f",(float)(sum/(n1+n2)));
    free(ptr);
    return 0;
}