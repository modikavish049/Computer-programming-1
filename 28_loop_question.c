/*
Question: Check whether a number is perfect.
Unit: 1
Compile: gcc 28_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i,s=0; scanf("%d",&n); for(i=1;i<=n/2;i++)if(n%i==0)s+=i; if(n>0&&s==n)printf("Perfect number");else printf("Not a perfect number");
    printf("\n");
    return 0;
}
