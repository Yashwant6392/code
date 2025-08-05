#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    int **ptr1 = &ptr;
    cout<<a<<" "<<ptr<<" "<<*ptr<<" "<<*ptr1<<" "<<**ptr1<<" "<<ptr1;
    return 0;
}