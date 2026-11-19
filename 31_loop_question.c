/*
Question: Find sum of prime numbers between 1 and 500.
Unit: 1
Compile: gcc 31_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i,p,s=0; for(n=2;n<=500;n++){p=1;for(i=2;i*i<=n;i++)if(n%i==0)p=0;if(p)s+=n;} printf("Sum of primes=%d",s);
    printf("\n");
    return 0;
}
