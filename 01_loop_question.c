/*
Question: Print the first 10 natural numbers.
Unit: 1
Compile: gcc 01_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i; for(i=1;i<=10;i++) printf("%d ",i);
    printf("\n");
    return 0;
}
