/*
Question: Delete the first element of an array.
Unit: 2
Compile: gcc 15_delete_first_element.c -o program
*/

#include <stdio.h>
int main(void){int a[20],n,i;scanf("%d",&n);if(n<1||n>20)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n-1;i++)a[i]=a[i+1];n--;for(i=0;i<n;i++)printf("%d ",a[i]);return 0;}
