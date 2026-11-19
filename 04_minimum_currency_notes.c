/*
Question: Find minimum notes using denominations 1,2,5,10,20,50,100,200,500.
Unit: 2
Compile: gcc 04_minimum_currency_notes.c -o program
*/

#include <stdio.h>
int main(void){int d[]={500,200,100,50,20,10,5,2,1},n,i,count;printf("Enter amount: ");scanf("%d",&n);if(n<0)return 0;for(i=0;i<9;i++){count=n/d[i];if(count)printf("%d note(s) of Rs. %d\n",count,d[i]);n%=d[i];}return 0;}
