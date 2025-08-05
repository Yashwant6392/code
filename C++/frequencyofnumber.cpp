#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printFrequencies(const vector<int>& nums) {
    unordered_map<int, int> frequency;

    // Count frequencies
    for (int num : nums) {
        frequency[num]++;
    }

    // Print frequencies
    for (const auto& pair : frequency) {
        cout << "Element " << pair.first << " occurs " << pair.second << " times\n";
    }
}

int main() {
    vector<int> nums = {1, 3, 1, 3, 5, 1, 5, 7};

    printFrequencies(nums);

    return 0;
}

