/*
Question: Find largest and smallest out of 100 numbers.
Unit: 1
Compile: gcc 16_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i,x,hi,lo; scanf("%d",&x); hi=lo=x; for(i=2;i<=100;i++){scanf("%d",&x);if(x>hi)hi=x;if(x<lo)lo=x;} printf("Largest=%d Smallest=%d",hi,lo);
    printf("\n");
    return 0;
}
