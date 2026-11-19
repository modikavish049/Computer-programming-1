/*
Question: Find sum of integers from 1 to 100 divisible by 3.
Unit: 1
Compile: gcc 20_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i,s=0; for(i=1;i<=100;i++)if(i%3==0)s+=i; printf("Sum=%d",s);
    printf("\n");
    return 0;
}
