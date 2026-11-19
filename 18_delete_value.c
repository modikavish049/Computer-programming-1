/*
Question: Delete the first occurrence of a given value from an array.
Unit: 2
Compile: gcc 18_delete_value.c -o program
*/

#include <stdio.h>
int main(void){int a[20],n,x,i,p=-1;scanf("%d",&n);if(n<1||n>20)return 0;for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(i=0;i<n;i++)if(a[i]==x){p=i;break;}if(p==-1)printf("Value not found");else{for(i=p;i<n-1;i++)a[i]=a[i+1];n--;for(i=0;i<n;i++)printf("%d ",a[i]);}return 0;}
