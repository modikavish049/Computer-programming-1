/*
Question: Check whether a string is a palindrome.

Compile with GCC:
gcc 08_palindrome_string.c -o program
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int left, right, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    left = 0;
    right = (int)strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
