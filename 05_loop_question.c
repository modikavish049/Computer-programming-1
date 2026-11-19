/*
Question: Print the first n odd numbers.
Unit: 1
Compile: gcc 05_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i; scanf("%d",&n); for(i=1;i<=n;i++) printf("%d ",2*i-1);
    printf("\n");
    return 0;
}
