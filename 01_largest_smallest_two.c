/*
Question: Find largest and smallest of two values.
Unit: 1
Compile: gcc 01_largest_smallest_two.c -o program
*/

#include <stdio.h>
int main(void){ float a,b; scanf("%f%f",&a,&b); if(a>b) printf("Largest=%.2f Smallest=%.2f\n",a,b); else if(b>a) printf("Largest=%.2f Smallest=%.2f\n",b,a); else printf("Both are equal: %.2f\n",a); return 0; }
