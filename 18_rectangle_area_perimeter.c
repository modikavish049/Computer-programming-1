/*
Question: Calculate area and perimeter of a rectangle.
Unit: 1
Compile: gcc 18_rectangle_area_perimeter.c -o program
*/

#include <stdio.h>
int main(void){ float l,b; printf("Enter length and breadth: "); scanf("%f%f",&l,&b); printf("Area = %.2f\nPerimeter = %.2f\n",l*b,2*(l+b)); return 0; }
