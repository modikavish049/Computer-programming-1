/*
Question: Insert a new number at the end of an array.
Unit: 2
Compile: gcc 14_insert_at_end.c -o program
*/

#include <stdio.h>
int main(void){int a[21],n,x,i;scanf("%d",&n);if(n<0||n>=20)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);a[n++]=x;for(i=0;i<n;i++)printf("%d ",a[i]);return 0;}
