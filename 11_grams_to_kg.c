/*
Question: Convert grams into kilograms.
Unit: 1
Compile: gcc 11_grams_to_kg.c -o program
*/

#include <stdio.h>
int main(void){ float x; printf("Enter grams: "); scanf("%f",&x); printf("Kilograms = %.3f\n",x/1000); return 0; }
