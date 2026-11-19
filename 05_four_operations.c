/*
Question: Perform addition, subtraction, multiplication and division.
Unit: 1
Compile: gcc 05_four_operations.c -o program
*/

#include <stdio.h>
int main(void){ float a,b; printf("Enter two numbers: "); scanf("%f%f",&a,&b); printf("Sum=%.2f\nDifference=%.2f\nProduct=%.2f\n",a+b,a-b,a*b); if(b!=0) printf("Quotient=%.2f\n",a/b); else printf("Quotient is undefined (division by zero).\n"); return 0; }
