/*
Question: Calculate total and average marks of three subjects.
Unit: 1
Compile: gcc 23_three_subjects.c -o program
*/

#include <stdio.h>
int main(void){ float a,b,c,t; printf("Enter marks of three subjects: "); scanf("%f%f%f",&a,&b,&c); t=a+b+c; printf("Total = %.2f\nAverage = %.2f\n",t,t/3); return 0; }
