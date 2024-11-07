#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int ans=0;
    while(n!=0){
        int remainder=n%10;
        ans = (ans*10) + remainder;
        n = n/10;
    }
    printf("The reversed no is %d",ans);
}