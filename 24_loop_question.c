/*
Question: Reverse the digits of a number.
Unit: 1
Compile: gcc 24_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,rev=0; scanf("%d",&n); while(n!=0){rev=rev*10+n%10;n/=10;} printf("Reversed=%d",rev);
    printf("\n");
    return 0;
}
