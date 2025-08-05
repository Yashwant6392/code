#include<iostream>
using namespace std;
int main()
{
    int a=10;
    char b='A';
    float c=15.6;
    int *ptra=&a;
    char *ptrb=&b;
    float *ptrc=&c;
    cout<<"address of a "<<ptra<<" value of a:"<<*ptra<<endl;
    cout<<"address of b "<<ptrb<<" value of b:"<<*ptrb<<endl;
    cout<<"address of c "<<ptrc<<" value of c:"<<*ptrc<<endl;
    return 0;
    
}