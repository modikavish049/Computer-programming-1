/*
Question: Search for a value in an array.
Unit: 2
Compile: gcc 19_search_value.c -o program
*/

#include <stdio.h>
int main(void){int a[20],n,x,i,found=0;scanf("%d",&n);if(n<1||n>20)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(i=0;i<n;i++)if(a[i]==x){printf("Found at position %d\n",i+1);found=1;}if(!found)printf("Value not found");return 0;}
