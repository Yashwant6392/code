#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter the value of n: ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if(count==0)
    {
        cout<<"prime number";
    }
    else{
        cout<<"not prime number";
    }
    return 0;

}