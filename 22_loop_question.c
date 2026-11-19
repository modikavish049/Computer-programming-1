/*
Question: Count digits in a number.
Unit: 1
Compile: gcc 22_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,count=0; scanf("%d",&n); if(n==0)count=1; while(n!=0){count++;n/=10;} printf("Digits=%d",count);
    printf("\n");
    return 0;
}
