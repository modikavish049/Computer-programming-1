/*
Question: Find largest and smallest of three values.
Unit: 1
Compile: gcc 02_largest_smallest_three.c -o program
*/

#include <stdio.h>
int main(void){ float a,b,c,hi,lo; printf("Enter three values: "); scanf("%f%f%f",&a,&b,&c); hi=lo=a; if(b>hi)hi=b; if(c>hi)hi=c; if(b<lo)lo=b; if(c<lo)lo=c; printf("Largest=%.2f Smallest=%.2f\n",hi,lo); return 0; }
