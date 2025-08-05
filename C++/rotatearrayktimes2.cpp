#include <iostream>
#include <vector>

using namespace std;

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; 
    vector<int> temp(arr.begin(), arr.begin() + k); 

    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    rotateArray(arr, k);

    cout << "Array after rotation: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}