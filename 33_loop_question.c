/*
Question: Check whether a number is automorphic.
Unit: 1
Compile: gcc 33_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    long long n,sq,p=1; scanf("%lld",&n); if(n<0){printf("Use a non-negative integer.");return 0;} sq=n*n; while(p<=n)p*=10; if(sq%p==n)printf("Automorphic number");else printf("Not automorphic");
    printf("\n");
    return 0;
}
