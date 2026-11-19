/*
Question: Accept 5 values and sort ascending or descending (bubble sort).
Unit: 2
Compile: gcc 03_sort_five_values.c -o program
*/

#include <stdio.h>
int main(void){int a[5],i,j,t,ch;for(i=0;i<5;i++)scanf("%d",&a[i]);printf("1 Ascending, 2 Descending: ");scanf("%d",&ch);for(i=0;i<4;i++)for(j=0;j<4-i;j++)if((ch==1&&a[j]>a[j+1])||(ch==2&&a[j]<a[j+1])){t=a[j];a[j]=a[j+1];a[j+1]=t;}for(i=0;i<5;i++)printf("%d ",a[i]);return 0;}
