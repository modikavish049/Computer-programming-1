/*
Question: Print all factors of a number.
Unit: 1
Compile: gcc 27_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i; scanf("%d",&n); for(i=1;i<=n;i++)if(n%i==0)printf("%d ",i);
    printf("\n");
    return 0;
}
