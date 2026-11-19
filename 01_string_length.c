/*
Question: Find the length of a string.

Compile with GCC:
gcc 01_string_length.c -o program
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Length = %zu\n", strlen(str));
    return 0;
}
