/*
Question: Find sum of digits of a number.
Unit: 1
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,s=0; scanf("%d",&n); if(n<0)n=-n; do{s+=n%10;n/=10;}while(n>0); printf("Sum of digits=%d",s);
    printf("\n");
    return 0;
}
