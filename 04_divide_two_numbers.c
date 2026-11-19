/*
Question: Divide two numbers.
Unit: 1
Compile: gcc 04_divide_two_numbers.c -o program
*/

#include <stdio.h>
int main(void){ float a,b; printf("Enter two numbers: "); scanf("%f%f",&a,&b); if(b==0) printf("Division by zero is not allowed.\n"); else printf("Quotient = %.2f\n",a/b); return 0; }
