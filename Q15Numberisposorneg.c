#include<stdio.h>
int main(){
    int x;
    printf("Enter x");
    scanf("%d",&x);
    if(x>0){
        printf("Number is Positive");
    }
    else if(x<0){
        printf("Number is Negatuve");
    }
    else{
        printf("Number is zero");
    }
    return 0;
}