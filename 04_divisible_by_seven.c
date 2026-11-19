/*
Question: Check whether a number is divisible by 7.
Unit: 1
Compile: gcc 04_divisible_by_seven.c -o program
*/

#include <stdio.h>
int main(void){ int n; printf("Enter an integer: "); scanf("%d",&n); if(n%7==0) printf("%d is divisible by 7.\n",n); else printf("%d is not divisible by 7.\n",n); return 0; }
