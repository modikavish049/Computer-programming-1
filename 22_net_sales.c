/*
Question: Calculate net sales after 10% discount.
Unit: 1
Compile: gcc 22_net_sales.c -o program
*/

#include <stdio.h>
int main(void){ float g; printf("Enter gross sales: "); scanf("%f",&g); printf("Net sales = %.2f\n",g-0.10f*g); return 0; }
