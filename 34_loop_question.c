/*
Question: Print Fibonacci series up to n terms, starting 1, 1.
Unit: 1
Compile: gcc 34_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i,a=1,b=1,c; scanf("%d",&n); for(i=1;i<=n;i++){printf("%d ",a);c=a+b;a=b;b=c;}
    printf("\n");
    return 0;
}
