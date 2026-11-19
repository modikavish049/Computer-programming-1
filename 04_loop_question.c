/*
Question: Print the first n natural numbers.
Unit: 1
*/

#include <stdio.h>
int main(void){
    printf("Enter required input(s), if any: ");
    int n,i; scanf("%d",&n); for(i=1;i<=n;i++) printf("%d ",i);
    printf("\n");
    return 0;
}
