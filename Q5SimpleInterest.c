//P->Principal
//R->Rate of interest in per annum
//Time in years
#include<stdio.h>
int main(){
int P,R,T;
printf("Enter princpal");
scanf("%d",&P);

printf("Enter Rate");
scanf("%d",&R);

printf("Enter Time");
scanf("%d",&T);

int SI = (P * R * T)/100;
printf("S.I = %d",SI);
}