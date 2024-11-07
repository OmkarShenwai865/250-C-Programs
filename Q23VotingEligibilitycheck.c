#include<stdio.h>
int main(){
    int age;
    printf("Enter age");
    scanf("%d",&age);
    if(age>=18){
        printf("You are Eligible to Vote");
    }
    else{
        printf("You are not Eligible to Vote");
    }
    return 0;
}