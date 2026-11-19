/*
Question: Count positive, negative and zero values among 200 inputs.
Unit: 1
Compile: gcc 17_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i,x,p=0,n=0,z=0; for(i=1;i<=200;i++){scanf("%d",&x);if(x>0)p++;else if(x<0)n++;else z++;} printf("Positive=%d Negative=%d Zero=%d",p,n,z);
    printf("\n");
    return 0;
}
