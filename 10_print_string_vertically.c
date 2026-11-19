/*
Question: Print each character of a string vertically.

Compile with GCC:
gcc 10_print_string_vertically.c -o program
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
        printf("%c\n", str[i]);

    return 0;
}
