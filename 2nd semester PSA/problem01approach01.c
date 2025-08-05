#include <stdio.h>
#include <limits.h>

int findMinDistance(int arr[], int n, int x, int y) {
    int minDistance = INT_MAX; // Initialize the minimum distance to a large value

    // Loop through the array to find pairs
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Check if elements at indices i and j are x and y
            if ((arr[i] == x && arr[j] == y) || (arr[i] == y && arr[j] == x)) {
                int distance = abs(i - j); // Calculate the distance
                if (distance < minDistance) {
                    minDistance = distance; // Update the minimum distance
                }
            }
        }
    }
    
    return minDistance;
}

int main() {
    int arr[] = {3, 5, 4, 2, 6, 5, 6, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3, y = 6;

    int minDistance = findMinDistance(arr, n, x, y);
    printf("The minimum distance between %d and %d is: %d\n", x, y, minDistance);

    return 0;
}