/*
Question: Convert dollars into rupees. Use $1 = Rs. 48.
Unit: 1
Compile: gcc 08_dollars_to_rupees.c -o program
*/

#include <stdio.h>
int main(void){ float x; printf("Enter dollars: "); scanf("%f",&x); printf("Rupees = Rs. %.2f\n",x*48); return 0; }
