/*
Question: Print your name n times.
Unit: 1
Compile: gcc 12_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i,n; char name[80]; scanf(" %79[^\n]",name); scanf("%d",&n); for(i=1;i<=n;i++) printf("%s\n",name);
    printf("\n");
    return 0;
}
