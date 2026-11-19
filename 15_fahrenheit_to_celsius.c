/*
Question: Convert Fahrenheit into Celsius.
Unit: 1
Compile: gcc 15_fahrenheit_to_celsius.c -o program
*/

#include <stdio.h>
int main(void){ float f; printf("Enter Fahrenheit: "); scanf("%f",&f); printf("Celsius = %.2f\n",(5.0f/9.0f)*(f-32)); return 0; }
