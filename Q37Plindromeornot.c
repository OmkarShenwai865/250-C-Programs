#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int ans=0;
    int NewNum = n;
    while(n!=0){
        int remainder=n%10;
        ans = (ans*10) + remainder;
        n = n/10;
    }
    if(ans==NewNum){
        printf("%d is a palindrome",NewNum);
    }
    else{
        printf("%d is not a palindrome",NewNum);
    }
}