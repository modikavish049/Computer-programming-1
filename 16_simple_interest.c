/*
Question: Calculate simple interest I = P*R*N/100.
Unit: 1
Compile: gcc 16_simple_interest.c -o program
*/

#include <stdio.h>
int main(void){ float p,r,n; printf("Enter principal, rate and time: "); scanf("%f%f%f",&p,&r,&n); printf("Simple interest = %.2f\n",p*r*n/100); return 0; }
