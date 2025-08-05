#include<iostream>
using namespace std;
int findmax(int *arr,int size)
{
    int i;
    int *max=&arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>*max)
        {
            max=&arr[i];
        }

    }
    return *max;
}
int main()
{
    int i;
    int arr[5]={1,200,30,5,70};
    int ptr = findmax(arr,5);
    cout<<"maximum value is: "<<ptr;
    return 0;

}