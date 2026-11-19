/*
Question: Calculate total, average and grade; any subject below 35 means fail.
Unit: 1
Compile: gcc 06_student_grade.c -o program
*/

#include <stdio.h>
int main(void){ float a,b,c,t,av; printf("Enter marks of three subjects: "); scanf("%f%f%f",&a,&b,&c); t=a+b+c; av=t/3; printf("Total=%.2f Average=%.2f\n",t,av); if(a<35||b<35||c<35||av<35) printf("Grade: Fail\n"); else if(av>=70) printf("Grade: Distinction\n"); else if(av>=60) printf("Grade: First Class\n"); else if(av>=50) printf("Grade: Second Class\n"); else printf("Grade: Third Class\n"); return 0; }
