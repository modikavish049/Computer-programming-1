/*
Question: Insert a new number at the beginning of an array.
Unit: 2
Compile: gcc 12_insert_at_beginning.c -o program
*/

#include <stdio.h>
int main(void){int a[21],n,x,i;scanf("%d",&n);if(n<0||n>=20)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(i=n;i>0;i--)a[i]=a[i-1];a[0]=x;n++;for(i=0;i<n;i++)printf("%d ",a[i]);return 0;}
