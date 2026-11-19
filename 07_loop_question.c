/*
Question: Print the sum of the first n natural numbers.
Unit: 1
Compile: gcc 07_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i,s=0; scanf("%d",&n); for(i=1;i<=n;i++) s+=i; printf("Sum=%d",s);
    printf("\n");
    return 0;
}
