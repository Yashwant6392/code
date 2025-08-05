
//HOW TO PRINT 3D ARRAY

#include <stdio.h>

int main() {
    int depth, rows, cols;

    // Taking dimensions of the array from the user
    printf("Enter the number of depths: ");
    scanf("%d", &depth);
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[depth][rows][cols];

    // Taking input for the 3D array from the user
    printf("Enter elements for the array:\n");
    for (int d = 0; d < depth; d++) {
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                printf("Element [%d][%d][%d]: ", d, r, c);
                scanf("%d", &array[d][r][c]);
            }
        }
    }

    // Printing the 3D array
    printf("\nThe 3D array is:\n");
    for (int d = 0; d < depth; d++) {
        printf("Depth %d:\n", d);
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                printf("%d ", array[d][r][c]);
            }
            printf("\n");
        }
    }

    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int a,b,c,i,j,k;
//     printf("enter no. of a");
//     scanf("%d ",&a);
//     printf("enter no. of b");
//     scanf("%d ",&b);
//     printf("enter no. of c");
//     scanf("%d ",&c);
//     int arr[a][b][c];
//     printf("enter the elements of the array\n");
//     for(i=0;i<a;i++)
//     {
//         for(j=0;j<b;j++){
//             for(k=0;k<c;k++){
//             printf("elements [%d][%d][%d]",i,j,k);
//             scanf("%d ",&arr[a][b][c]);
//             }
//         }


//     }
//     printf("The 3D array is\n:");
//     for(i=0;i<a;i++){
//         printf("depth %d:\n",i);
//         for(j=0;j<b;j++){
//             for(k=0;k<c;k++){
//                 printf("%d ",arr[a][b][c]);
//             }
//             printf("\n");
//         }  
//     }
//     return 0;
    
// }