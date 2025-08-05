#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
void seiveoferatosthenes(int n)
{
    vector<bool>isprime(n+1,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i<sqrt(n);++i)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isprime[j]=false;
            }
        }
    }

cout<<"prime number upto n "<<n<<"are: ";
for(int i=2;i<=n;++i){
    if(isprime[i])
    {
        cout<<i<<" ";
    }

   }
   cout<<endl;
}

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    seiveoferatosthenes(n);
    return 0;
}