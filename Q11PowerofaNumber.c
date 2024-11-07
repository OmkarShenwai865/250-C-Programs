#include<stdio.h>
int main(){
int base,exp;
int result = 1;
printf("Enter a base integer");
scanf("%d",&base);

printf("Enter an exponent");
scanf("%d",&exp);

while(exp!=0){
    result = result * base;
    exp--;
}

printf("Answer is %d",result);
return 0;
}