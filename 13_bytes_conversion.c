/*
Question: Convert bytes into KB, MB and GB.
Unit: 1
Compile: gcc 13_bytes_conversion.c -o program
*/

#include <stdio.h>
int main(void){ double b; printf("Enter bytes: "); scanf("%lf",&b); printf("KB = %.4f\nMB = %.6f\nGB = %.8f\n",b/1024,b/(1024*1024),b/(1024*1024*1024)); return 0; }
