/*
Question: Reverse an array containing at most 5 elements.
Unit: 2
Compile: gcc 09_reverse_array.c -o program
*/

#include <stdio.h>
int main(void){int a[5],n,i;scanf("%d",&n);if(n<1||n>5)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=n-1;i>=0;i--)printf("%d ",a[i]);return 0;}
