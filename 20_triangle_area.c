/*
Question: Calculate area of a triangle: base*height/2.
Unit: 1
Compile: gcc 20_triangle_area.c -o program
*/

#include <stdio.h>
int main(void){ float b,h; printf("Enter base and height: "); scanf("%f%f",&b,&h); printf("Area = %.2f\n",b*h/2); return 0; }
