/*
Question: Find the largest and smallest values in a 3x3 matrix using a pointer.

Compile with GCC:
gcc 03_largest_smallest_pointer.c -o program
*/

#include <stdio.h>

int main(void) {
    int matrix[3][3], *ptr;
    int i, largest, smallest;

    printf("Enter 9 elements of the matrix:\n");
    for (i = 0; i < 9; i++)
        scanf("%d", &matrix[0][i]);

    ptr = &matrix[0][0];
    largest = smallest = *ptr;

    for (i = 1; i < 9; i++) {
        if (*(ptr + i) > largest) largest = *(ptr + i);
        if (*(ptr + i) < smallest) smallest = *(ptr + i);
    }

    printf("Largest = %d\nSmallest = %d\n", largest, smallest);
    return 0;
}
