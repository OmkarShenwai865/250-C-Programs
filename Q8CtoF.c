#include<stdio.h>
int main(){
int C,F;
printf("Enter temperature in celcius");
scanf("%d",&C);
F = (9 * C)/5 + 32;
printf("Temperature in Fahrenheit is = %d",F);
}