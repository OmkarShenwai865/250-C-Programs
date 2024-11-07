#include<stdio.h>
int main(){
    int num1, num2, gcd;
    printf("Enter num1 and num2");
    scanf("%d %d",&num1,&num2);
int i = 1;
while(i<=num1 && i<=num2){
    if(num1%i==0 && num2%i==0){
        gcd = i;
    }
    i++;
}
printf("The GCD of %d & %d is %d",num1,num2,gcd);
return 0;
}