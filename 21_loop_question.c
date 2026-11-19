/*
Question: Print digits of a number in reverse order.
Unit: 1
Compile: gcc 21_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n; scanf("%d",&n); if(n<0)n=-n; if(n==0)printf("0"); while(n>0){printf("%d ",n%10);n/=10;}
    printf("\n");
    return 0;
}
