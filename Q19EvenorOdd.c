#include<stdio.h>
int main(){
    int num1;
    printf("Enter a number");
    scanf("%d",&num1);
    if(num1%2==0){
        printf("It is An Even Number");
    }
    else{
        printf("It is an Odd Number");
    }
    return 0;
}