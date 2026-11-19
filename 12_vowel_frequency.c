/*
Question: Count the frequency of each vowel in a string.

Compile with GCC:
gcc 12_vowel_frequency.c -o program
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[300];
    int a = 0, e = 0, i = 0, o = 0, u = 0, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (j = 0; str[j] != '\0'; j++) {
        switch (tolower((unsigned char)str[j])) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d\n", a, e, i, o, u);
    return 0;
}
