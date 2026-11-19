/*
Question: Calculate area and perimeter of a square.
Unit: 1
Compile: gcc 17_square_area_perimeter.c -o program
*/

#include <stdio.h>
int main(void){ float s; printf("Enter side: "); scanf("%f",&s); printf("Area = %.2f\nPerimeter = %.2f\n",s*s,4*s); return 0; }
