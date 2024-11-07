#include<stdio.h>
int main(){
int num1,num2,fact=1;
int lcm;
printf("Enter two numbers: ");
scanf("%d %d",&num1,&num2);
lcm = (num1>num2)?num1:num2;
while(fact){
    if(lcm%num1==0 && lcm%num2==0){
        printf("The LCM of %d & %d is %d",num1,num2,lcm);
        fact = 0;
    }
lcm++;
}
return 0;
}