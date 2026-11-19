/*
Question: Calculate net salary = gross + 10% allowance - 3% deduction.
Unit: 1
Compile: gcc 21_net_salary.c -o program
*/

#include <stdio.h>
int main(void){ float g; printf("Enter gross salary: "); scanf("%f",&g); printf("Net salary = %.2f\n",g+0.10f*g-0.03f*g); return 0; }
