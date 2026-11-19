/*
Question: Check Armstrong number using the sum of cubes of digits, as described in the manual.
Unit: 1
Compile: gcc 26_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,t,sum=0; scanf("%d",&n); t=n; if(n>=0){do{int digit=t%10;sum+=digit*digit*digit;t/=10;}while(t>0);} if(n>=0&&sum==n)printf("Armstrong number");else printf("Not an Armstrong number");
    printf("\n");
    return 0;
}
