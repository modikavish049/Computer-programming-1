/*
Question: Convert Celsius into Fahrenheit.
Unit: 1
Compile: gcc 14_celsius_to_fahrenheit.c -o program
*/

#include <stdio.h>
int main(void){ float c; printf("Enter Celsius: "); scanf("%f",&c); printf("Fahrenheit = %.2f\n",(9.0f/5.0f*c)+32); return 0; }
