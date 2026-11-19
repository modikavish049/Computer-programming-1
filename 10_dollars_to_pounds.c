/*
Question: Convert dollars into pounds using $1 = Rs. 48 and £1 = Rs. 70.
Unit: 1
Compile: gcc 10_dollars_to_pounds.c -o program
*/

#include <stdio.h>
int main(void){ float x; printf("Enter dollars: "); scanf("%f",&x); printf("Pounds = %.2f\n",x*48/70); return 0; }
