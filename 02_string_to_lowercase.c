/*
Question: Convert a string to lowercase.

Compile with GCC:
gcc 02_string_to_lowercase.c -o program
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
        str[i] = (char)tolower((unsigned char)str[i]);

    printf("Lowercase string: %s\n", str);
    return 0;
}
