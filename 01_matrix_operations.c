/*
Question: Perform addition, subtraction and multiplication on two 3x3 matrices.

Compile with GCC:
gcc 01_matrix_operations.c -o program
*/

#include <stdio.h>

int main(void) {
    int a[3][3], b[3][3], sum[3][3], diff[3][3], product[3][3] = {0};
    int i, j, k;

    printf("Enter 9 elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter 9 elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
            for (k = 0; k < 3; k++)
                product[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("\nAddition:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("\nSubtraction (A - B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d ", diff[i][j]);
        printf("\n");
    }

    printf("\nMultiplication (A x B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
