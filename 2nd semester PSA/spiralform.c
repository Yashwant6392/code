int main() {
    int i, row = 4, col = 4;
    int arr[4][4] = {
        {1, 2, 3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    printf("Spiral order:\n");

    while (top <= bottom && left <= right)
    {
	
        
        for (i = left; i <= right; i++)
            printf("%d ", arr[top][i]);
        top++;

        
        for (i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;

        
        for (i = right; i >= left; i--)
            printf("%d ", arr[bottom][i]);
        bottom--;

        
        for (i = bottom; i >= top; i--)
            printf("%d ", arr[i][left]);
        left++;
    }
    return 0;
}
