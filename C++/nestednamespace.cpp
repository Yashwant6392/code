#include<iostream>
using namespace std;
namespace outer
{
    namespace inner
{
    void calculation()
    {
        cout<<"Math calculation"<<endl;
    }
}
}

int main()
{
    outer::inner::calculation();
    return 0;
}