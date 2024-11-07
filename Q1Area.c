#include<stdio.h>
int main(){
float radius;
printf("Enter radius");
scanf("%f",&radius);
float area,circumference;
float PI = 3.14;
area = PI * radius * radius;
circumference= 2 * PI * radius;
printf("area = %f, circumference = %f",area,circumference);
return 0;
}