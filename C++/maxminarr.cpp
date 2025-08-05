#include<iostream>
using namespace std;
int main()
{
    int i,n,max,min;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"enter elements";
        cin>>arr[i];
    }
    max=arr[0];
    min=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else
        min=arr[i];
    }
    cout<<"maximum value "<<max <<endl ;
    cout<<"minimum value "<<min ;
    return 0;
    

}
