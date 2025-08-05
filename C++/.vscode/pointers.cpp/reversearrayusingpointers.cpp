#include<iostream>
using namespace std;
void swaparray(int* arr,int size)
{
    int *start =arr;
    int *end=arr+size-1;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        *end--;
    *start++;
    }
  
}
int main()
{
    int i;
    int arr[5]={1,2,3,4,5};
    swaparray(arr,5);
    for(i=0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}