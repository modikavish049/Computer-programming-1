/*
Question: Convert hours into minutes.
Unit: 1
Compile: gcc 06_hours_to_minutes.c -o program
*/

#include <stdio.h>
int main(void){ float h; printf("Enter hours: "); scanf("%f",&h); printf("Minutes = %.2f\n",h*60); return 0; }
