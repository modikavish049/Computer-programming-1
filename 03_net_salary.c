/*
Question: Calculate net salary using the given gross-salary allowance and deduction slabs.
Unit: 1
Compile: gcc 03_net_salary.c -o program
*/

#include <stdio.h>
int main(void){ float g,a=0,d=0; printf("Enter gross salary: "); scanf("%f",&g); if(g>10000){a=.10f*g;d=.03f*g;} else if(g>5000){a=.07f*g;d=.02f*g;} printf("Allowance=%.2f Deduction=%.2f Net salary=%.2f\n",a,d,g+a-d); return 0; }
