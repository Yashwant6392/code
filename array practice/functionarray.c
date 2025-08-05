// #include<stdio.h>
// void fun(int a)
// {
//     a=9;
//     return;
// }
// int main()
// {
//     int a=5;
//     printf("%d\n",a);
//     fun(a);
//     printf("%d",a);
//     return 0;
// }


// #include<stdio.h>
// void fun(int x[])
// {
//     x[0]=9;
//     return;
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d",arr[0]);
//     return 0;
// }



#include<stdio.h>
void fun(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("after swapping %d %d\n",a,b);
    return;
}
int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    printf("before swapping %d %d\n",a,b);
    fun(a,b);
    return 0;
}