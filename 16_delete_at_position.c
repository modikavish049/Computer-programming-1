/*
Question: Delete an element at a specified 1-based position.
Unit: 2
Compile: gcc 16_delete_at_position.c -o program
*/

#include <stdio.h>
int main(void){int a[20],n,p,i;scanf("%d",&n);if(n<1||n>20)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&p);if(p<1||p>n)return 0;for(i=p-1;i<n-1;i++)a[i]=a[i+1];n--;for(i=0;i<n;i++)printf("%d ",a[i]);return 0;}
