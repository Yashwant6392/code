#include<iostream>
using namespace std;
namespace math
{
    void calculation()
    {
        cout<<"Math calculation"<<endl;
    }
}
namespace science
{
    void calculation()
    {
        cout<<"Science calculation";

    }
}
int main()
{
    math::calculation();
    science::calculation();
    return 0;
}