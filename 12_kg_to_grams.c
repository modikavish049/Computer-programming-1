/*
Question: Convert kilograms into grams.
Unit: 1
Compile: gcc 12_kg_to_grams.c -o program
*/

#include <stdio.h>
int main(void){ float x; printf("Enter kilograms: "); scanf("%f",&x); printf("Grams = %.2f\n",x*1000); return 0; }
