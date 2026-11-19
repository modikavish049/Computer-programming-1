/*
Question: Copy 5 values into a 10-element array, skipping destination index 1 (second position).
Unit: 2
Compile: gcc 08_copy_skip_destination_element.c -o program
*/

#include <stdio.h>
int main(void){int src[5],dest[10]={0},i,k=0;for(i=0;i<5;i++)scanf("%d",&src[i]);for(i=0;i<10&&k<5;i++){if(i==1)continue;dest[i]=src[k++];}for(i=0;i<10;i++)printf("%d ",dest[i]);return 0;}
