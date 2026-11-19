/*
Question: Add two 2D arrays of the same size and store the result in a third.
Unit: 2
Compile: gcc 05_add_two_matrices.c -o program
*/

#include <stdio.h>
int main(void){int a[10][10],b[10][10],c[10][10],r,col,i,j;scanf("%d%d",&r,&col);if(r<1||r>10||col<1||col>10)return 0;for(i=0;i<r;i++)for(j=0;j<col;j++)scanf("%d",&a[i][j]);for(i=0;i<r;i++)for(j=0;j<col;j++)scanf("%d",&b[i][j]);for(i=0;i<r;i++)for(j=0;j<col;j++)c[i][j]=a[i][j]+b[i][j];for(i=0;i<r;i++){for(j=0;j<col;j++)printf("%d ",c[i][j]);printf("\n");}return 0;}
