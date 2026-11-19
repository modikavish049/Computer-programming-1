/*
Question: Shift 10 values n positions left or right and fill empty places with zero.
Unit: 2
Compile: gcc 11_shift_array.c -o program
*/

#include <stdio.h>
int main(void){int a[10],b[10]={0},n,ch,i;for(i=0;i<10;i++)scanf("%d",&a[i]);scanf("%d%d",&n,&ch);if(n<0)n=0;if(n>10)n=10;for(i=0;i<10;i++){if(ch==1&&i+n<10)b[i]=a[i+n];else if(ch==2&&i-n>=0)b[i]=a[i-n];}for(i=0;i<10;i++)printf("%d ",b[i]);return 0;}
