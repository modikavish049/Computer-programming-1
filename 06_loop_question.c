/*
Question: Print the first n even numbers.
Unit: 1
Compile: gcc 06_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i; scanf("%d",&n); for(i=1;i<=n;i++) printf("%d ",2*i);
    printf("\n");
    return 0;
}
