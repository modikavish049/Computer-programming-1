/*
Question: Convert rupees into dollars. Use $1 = Rs. 48.
Unit: 1
Compile: gcc 09_rupees_to_dollars.c -o program
*/

#include <stdio.h>
int main(void){ float x; printf("Enter rupees: "); scanf("%f",&x); printf("Dollars = $%.2f\n",x/48); return 0; }
