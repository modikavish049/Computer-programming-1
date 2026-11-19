/*
Question: Convert uppercase letters to lowercase and lowercase letters to uppercase (toggle case).

Compile with GCC:
gcc 04_toggle_string_case.c -o program
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

    for (i = 0; str[i] != '\0'; i++) {
        if (islower((unsigned char)str[i]))
            str[i] = (char)toupper((unsigned char)str[i]);
        else if (isupper((unsigned char)str[i]))
            str[i] = (char)tolower((unsigned char)str[i]);
    }

    printf("Toggle case: %s\n", str);
    return 0;
}
