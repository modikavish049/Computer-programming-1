/*
Question: Concatenate one string at the end of another using strcat().

Compile with GCC:
gcc 09_concatenate_strings.c -o program
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char first[400], second[200];

    printf("Enter first string: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0';

    strcat(first, second);
    printf("Concatenated string: %s\n", first);
    return 0;
}
