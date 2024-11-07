#include<stdio.h>
int main(){
float sub1,sub2,sub3,sub4,sub5;
printf("Enter marks of sub 1: ");
scanf("%f",&sub1);

printf("Enter marks of sub 2: ");
scanf("%f",&sub2);

printf("Enter marks of sub 3: ");
scanf("%f",&sub3);

printf("Enter marks of sub 4: ");
scanf("%f",&sub4);

printf("Enter marks of sub 5: ");
scanf("%f",&sub5);

float totalmarks = 500.0;
float percentage = (sub1+sub2+sub3+sub4+sub5)*(100)/totalmarks;
printf("percentage = %f",percentage);
return 0;
}