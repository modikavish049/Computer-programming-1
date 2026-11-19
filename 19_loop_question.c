/*
Question: Print integers from 1 to 100 divisible by 5.
Unit: 1
Compile: gcc 19_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i; for(i=1;i<=100;i++)if(i%5==0)printf("%d ",i);
    printf("\n");
    return 0;
}
