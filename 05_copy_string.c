/*
Question: Copy one string to another using strcpy().

Compile with GCC:
gcc 05_copy_string.c -o program
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char source[200], destination[200];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';

    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}
