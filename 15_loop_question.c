/*
Question: Calculate sum and mean of n values.
Unit: 1
Compile: gcc 15_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i,n; float x,s=0; scanf("%d",&n); if(n<=0)return 0; for(i=1;i<=n;i++){scanf("%f",&x);s+=x;} printf("Sum=%.2f Mean=%.2f",s,s/n);
    printf("\n");
    return 0;
}
