/*
Question: Print the two parallel-loop patterns shown in the manual.
Unit: 1
Compile: gcc 36_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i; printf("Pattern A:\n");for(i=1;i<=5;i++)printf("%d %d\n",i,6-i); printf("Pattern B (as printed in manual):\n");printf("1 5\n1 5\n2 4\n2 4\n3 3\n3 3\n");
    printf("\n");
    return 0;
}
