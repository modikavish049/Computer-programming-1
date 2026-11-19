/*
Question: Find frequency of each distinct number in an array of 10 elements.
Unit: 2
Compile: gcc 10_frequency_ten_values.c -o program
*/

#include <stdio.h>
int main(void){int a[10],seen[10]={0},i,j,count;for(i=0;i<10;i++)scanf("%d",&a[i]);for(i=0;i<10;i++){if(seen[i])continue;count=1;for(j=i+1;j<10;j++)if(a[i]==a[j]){count++;seen[j]=1;}printf("%d occurs %d time(s)\n",a[i],count);}return 0;}
