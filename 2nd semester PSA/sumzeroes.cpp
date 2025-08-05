#include<iostream>
#include<algorithm> 
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n - 1; i++) {
        int l = i+1 ;
        int r = n - 1;

        while(l < r) {
            int sum = arr[i] + arr[l] + arr[r];

            if(sum == 0) {
                cout << " (" << arr[i] << ", " << arr[l] << ", " << arr[r] << ")" << endl;
                l++;
                r--;
            } else if(sum < 0) {
                l++; 
            } else {
                r--; 
            }
        }
    }

    return 0;
}
