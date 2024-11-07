#include<stdio.h>
int main(){
    int num,ans;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        ans = num * i;
    printf("Table of %d is: %d * %d = %d\n",num,num,i,ans);
    }
    return 0;
}