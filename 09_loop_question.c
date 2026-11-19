/*
Question: Print the sum of the first n even numbers.
Unit: 1
Compile: gcc 09_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i,s=0; scanf("%d",&n); for(i=1;i<=n;i++) s+=2*i; printf("Sum=%d",s);
    printf("\n");
    return 0;
}
