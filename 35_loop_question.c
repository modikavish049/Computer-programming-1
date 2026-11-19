/*
Question: Print the four nested-loop patterns shown in the manual.
Unit: 1
Compile: gcc 35_loop_question.c -o program
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int a,b,c; printf("Pattern A:\n");for(a=1;a<=2;a++)for(b=1;b<=3;b++)printf("%d %d\n",a,b); printf("Pattern B:\n");for(a=1;a<=3;a++)for(b=1;b<=a;b++)printf("%d %d\n",a,b); printf("Pattern C:\n");for(a=1;a<=2;a++)for(b=1;b<=2;b++)for(c=1;c<=2;c++)printf("%d %d %d\n",a,b,c); printf("Pattern D:\n");for(a=5;a>=3;a--)for(b=1;b<=2;b++)printf("%d %d\n",a,b);
    printf("\n");
    return 0;
}
