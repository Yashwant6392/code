#include <stdio.h>

// Swap utility
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Wave sort using even indices
void waveSort(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        // Check left
        
        if (i > 0 && arr[i] < arr[i - 1])
            swap(&arr[i], &arr[i - 1]);

        // Check right
        if (i < n - 1 && arr[i] < arr[i + 1])
            swap(&arr[i], &arr[i + 1]);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    waveSort(arr, n);

    printf("Wave array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}