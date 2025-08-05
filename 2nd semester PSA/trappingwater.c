#include <stdio.h>

int trapWater(int height[], int n) {
    // int left = 0, right = n - 1;
    int leftMax[] = height[0], rightMax[] = height[n-1], water = 0,min,i;
    for(int i=0;i<n;i++)
    {
        if(height[i] > leftMax[i-1]) {
            leftMax[i] = height[i];
        }
        else{
            leftMax[i] = leftMax[i-1];
        }
        }
        for(i=n-2;i>=0;i--)
        {
            if(height[i] > rightMax[i+1]) {
                rightMax[i] = height[i];
            }
            else{
                rightMax[i] = rightMax[i+1];
            }
        }
        for(i=0;i<n;i++)
        {
            if(leftMax[i] > rightMax[i]) {
                 min=rightMax[i];
            } else {
                min=leftMax[i];
            }
        }
        water=water + (min - height[i]);
    
    return water;
}

int main() {
    int arr[] = {3, 0, 1, 0, 4,0,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Trapped Water: %d\n", trapWater(arr, n));
    return 0;
}