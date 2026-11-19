/*
Question: Find transpose of a 4x4 matrix.
Unit: 2
Compile: gcc 07_transpose_4x4.c -o program
*/

#include <stdio.h>
int main(void){int a[4][4],i,j;for(i=0;i<4;i++)for(j=0;j<4;j++)scanf("%d",&a[i][j]);for(i=0;i<4;i++){for(j=0;j<4;j++)printf("%d ",a[j][i]);printf("\n");}return 0;}
