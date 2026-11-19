/*
Question: Print your name 5 times.
Unit: 1
Compile: gcc 11_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i; char name[80]; scanf(" %79[^\n]",name); for(i=1;i<=5;i++) printf("%s\n",name);
    printf("\n");
    return 0;
}
