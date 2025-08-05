//NON TAIL RECURSION
#include<stdio.h>
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    else
    return n*factorial(n-1);

}
int main()
{
    int x=5,f;
    //f=factorial(x);
    printf("%d",factorial(x));
    return 0;
    
}

//TAIL RECURSION

// #include<stdio.h>
// int factorial(int n,int p)
// {
//     if(n==0){
//         return p;
//     }
//     else
//     return factorial(n-1 ,n*p);

// }
// int main()
// {
//     int x=5,f;
//     f=factorial(x,1);
//     printf("%d",f);
//     return 0;
    
// }