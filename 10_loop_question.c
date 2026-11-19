/*
Question: Print factorial of a given number (0 to 20).
Unit: 1
Compile: gcc 10_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i; unsigned long long f=1; scanf("%d",&n); if(n<0||n>20) printf("Enter a number from 0 to 20."); else { for(i=1;i<=n;i++) f*=i; printf("Factorial=%llu",f); }
    printf("\n");
    return 0;
}
