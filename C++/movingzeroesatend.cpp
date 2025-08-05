#include<iostream>
#include<vector>
using namespace std;
void movezeroes(vector<int>&arr)
{
    int insertpos=0;
    for(int num:arr)   //elements of array
    {
        if(num!=0)
        {
            arr[insertpos++]=num;
        }
    }
    while(insertpos<arr.size())
    {
        arr[insertpos++]=0;
    }
}
int main()
{
    vector<int>arr={0,1,0,3,12};
    movezeroes(arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
    
}
