#include<iostream>
using namespace std;
namespace geometry2D
{
    int area(int length, int breadth)
    {
        return length * breadth;
    }
    
}
namespace geometry3D
{
    int area(int length, int breadth, int height)
    {
        return length * breadth * height;
    }
}
int main()
{
    cout << "Area of rectangle: " << geometry2D::area(4,5) << endl;
    cout << "Area of cuboid: " << geometry3D::area(4,5,6) << endl;
    
    return 0;
}

