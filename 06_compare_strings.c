/*
Question: Compare two strings lexicographically using strcmp().

Compile with GCC:
gcc 06_compare_strings.c -o program
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char first[200], second[200];
    int result;

    printf("Enter first string: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0';

    result = strcmp(first, second);

    if (result == 0)
        printf("Both strings are the same.\n");
    else if (result < 0)
        printf("First string is lexicographically smaller.\n");
    else
        printf("First string is lexicographically greater.\n");

    return 0;
}
