/*
Question: Reverse a string.

Compile with GCC:
gcc 07_reverse_string.c -o program
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200], temp;
    int left, right;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    left = 0;
    right = (int)strlen(str) - 1;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
