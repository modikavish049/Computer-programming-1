/*
Question: Check whether a number is prime.
Unit: 1
Compile: gcc 29_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i,prime=1; scanf("%d",&n); if(n<2)prime=0; for(i=2;i*i<=n;i++)if(n%i==0)prime=0; if(prime)printf("Prime");else printf("Not prime");
    printf("\n");
    return 0;
}
