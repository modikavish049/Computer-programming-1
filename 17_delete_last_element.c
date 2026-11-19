/*
Question: Delete the last element of an array.
Unit: 2
Compile: gcc 17_delete_last_element.c -o program
*/

#include <stdio.h>
int main(void){int a[20],n,i;scanf("%d",&n);if(n<1||n>20)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);n--;for(i=0;i<n;i++)printf("%d ",a[i]);return 0;}
