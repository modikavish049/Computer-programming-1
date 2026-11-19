/*
Question: Print the characters of a string vertically in reverse order.

Compile with GCC:
gcc 11_reverse_string_vertically.c -o program
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = (int)strlen(str) - 1; i >= 0; i--)
        printf("%c\n", str[i]);

    return 0;
}
