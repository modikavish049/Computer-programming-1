/*
Question: Accept 10 values and print the 4th, 7th and 9th values.
Unit: 2
Compile: gcc 02_print_4th_7th_9th.c -o program
*/

#include <stdio.h>
int main(void){int a[10],i;for(i=0;i<10;i++)scanf("%d",&a[i]);printf("4th=%d 7th=%d 9th=%d",a[3],a[6],a[8]);return 0;}
