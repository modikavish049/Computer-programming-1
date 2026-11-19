/*
Question: Accept 5 values and print them.
Unit: 2
Compile: gcc 01_accept_print_five.c -o program
*/

#include <stdio.h>
int main(void){int a[5],i;for(i=0;i<5;i++)scanf("%d",&a[i]);for(i=0;i<5;i++)printf("%d ",a[i]);return 0;}
