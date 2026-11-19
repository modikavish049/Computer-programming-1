/*
Question: Calculate sum and mean of 10 values.
Unit: 1
Compile: gcc 14_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i; float x,s=0; for(i=1;i<=10;i++){scanf("%f",&x);s+=x;} printf("Sum=%.2f Mean=%.2f",s,s/10);
    printf("\n");
    return 0;
}
