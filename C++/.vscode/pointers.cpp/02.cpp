#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5]={1,2,3,4,5};
    int *ptr= arr;
    for(i=0;i<5;i++)
    {
        cout<<"value at index: "<<i<<" "<<*(ptr+i)<<" "<<(ptr+i)<<endl;
    }
    return 0;
}

