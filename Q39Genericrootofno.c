#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int sum=0;
    int temp = n;
    int rem;
    while(temp>0){
 rem = temp%10;
 sum = sum + rem;
 temp = temp/10;
 if(temp==0){
    if(sum>9){
temp = sum;
sum = 0;
    }
 }
    }
    printf("The Generic Root Of the number is %d",sum);
}