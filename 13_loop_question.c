/*
Question: Find sum of numbers divisible by 13 from 1 to 100.
Unit: 1
Compile: gcc 13_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i,s=0; for(i=1;i<=100;i++) if(i%13==0)s+=i; printf("Sum=%d",s);
    printf("\n");
    return 0;
}
