/*
Question: Print the first 10 even numbers.
Unit: 1
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int i; for(i=1;i<=10;i++) printf("%d ",2*i);
    printf("\n");
    return 0;
}
