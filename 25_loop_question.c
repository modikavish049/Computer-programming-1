/*
Question: Check whether a number is a palindrome.
Unit: 1
Compile: gcc 25_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,t,rev=0; scanf("%d",&n); t=n; while(t>0){rev=rev*10+t%10;t/=10;} if(n>=0&&n==rev)printf("Palindrome");else printf("Not palindrome");
    printf("\n");
    return 0;
}
