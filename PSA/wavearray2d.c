#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];
 
    printf("Enter elements for the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Printing the 2D array in waveform pattern
    printf("\nThe 2D array in waveform is:\n");
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            // For even columns, print from top to bottom
            for (int i = 0; i < rows; i++) {
                printf("%d ", array[i][j]);
            }
        } else {
            // For odd columns, print from bottom to top
            for (int i = rows - 1; i >= 0; i--) {
                printf("%d ", array[i][j]);
            }
        }
    }

    return 0;
}
