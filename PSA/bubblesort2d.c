#include <stdio.h>

int main() {
    int rows, cols;

    // Taking dimensions of the array from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    // Taking input for the 2D array from the user
    printf("Enter elements for the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Bubble Sort for each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (array[i][k] > array[i][k + 1]) {
                    // Swap elements
                    int temp = array[i][k];
                    array[i][k] = array[i][k + 1];
                    array[i][k + 1] = temp;
                }
            }
        }
    }

    // Printing the sorted 2D array
    printf("\nThe sorted 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
