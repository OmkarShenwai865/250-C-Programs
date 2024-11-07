#include<stdio.h>
int main(){
int n;
printf("Enter the integer");
scanf("%d",&n);
int fact = 1;
for(int i =1;i<=n;i++){
    fact = fact * i;
    }
    if(n==0){
        fact = 1;
    }

    printf("Factorial of the given integer is : %d",fact);
}
