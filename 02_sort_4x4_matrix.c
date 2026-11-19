/*
Question: Sort all elements of a 4x4 matrix and store them in a one-dimensional array.

Compile with GCC:
gcc 02_sort_4x4_matrix.c -o program
*/

#include <stdio.h>

int main(void) {
    int matrix[4][4], arr[16], i, j, k = 0, temp;

    printf("Enter 16 matrix elements:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
            arr[k++] = matrix[i][j];
        }

    for (i = 0; i < 15; i++)
        for (j = 0; j < 15 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    printf("Sorted one-dimensional array:\n");
    for (i = 0; i < 16; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
