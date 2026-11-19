/*
Question: Convert minutes into hours.
Unit: 1
Compile: gcc 07_minutes_to_hours.c -o program
*/

#include <stdio.h>
int main(void){ float m; printf("Enter minutes: "); scanf("%f",&m); printf("Hours = %.2f\n",m/60); return 0; }
