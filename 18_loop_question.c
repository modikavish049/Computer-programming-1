/*
Question: Count boys and girls in a class of 50 using M/F sex codes.
Unit: 1
Compile: gcc 18_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i,b=0,g=0; char sex; for(i=1;i<=50;i++){scanf(" %c",&sex);if(sex=='M'||sex=='m')b++;else if(sex=='F'||sex=='f')g++;} printf("Boys=%d Girls=%d",b,g);
    printf("\n");
    return 0;
}
