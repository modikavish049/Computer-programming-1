/*
Question: Insert a number at a specified 1-based position.
Unit: 2
Compile: gcc 13_insert_at_position.c -o program
*/

#include <stdio.h>
int main(void){int a[21],n,x,p,i;scanf("%d",&n);if(n<0||n>=20)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d%d",&x,&p);if(p<1||p>n+1)return 0;for(i=n;i>=p;i--)a[i]=a[i-1];a[p-1]=x;n++;for(i=0;i<n;i++)printf("%d ",a[i]);return 0;}
