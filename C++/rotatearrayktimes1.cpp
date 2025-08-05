#include <iostream>
using namespace std;

int main() {
    int n,i, k;
   
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the number of rotations: ";
    cin >> k;

    int arr[n];
    int temp[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(i=0;i<k;i++)
    {
        temp[i]=arr[n-k+i];
    }
    for(i=k;i<n;i++)
    {
        temp[i]=arr[i-k];
    }
    for(i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i];
    }
    return 0;
}
