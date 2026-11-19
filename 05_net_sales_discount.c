/*
Question: Calculate net sales: discount 15% if gross > 20000, 10% if > 10000, otherwise 5%.
Unit: 1
Compile: gcc 05_net_sales_discount.c -o program
*/

#include <stdio.h>
int main(void){ float g,r; printf("Enter gross sales: "); scanf("%f",&g); if(g>20000)r=.15f; else if(g>10000)r=.10f; else r=.05f; printf("Discount=%.2f Net sales=%.2f\n",g*r,g-g*r); return 0; }
