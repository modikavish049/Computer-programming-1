/*
Question: Calculate area of a circle using 22/7.
Unit: 1
Compile: gcc 19_circle_area.c -o program
*/

#include <stdio.h>
int main(void){ float r; printf("Enter radius: "); scanf("%f",&r); printf("Area = %.2f\n",(22.0f/7.0f)*r*r); return 0; }
