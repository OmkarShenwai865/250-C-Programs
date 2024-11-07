#include<stdio.h>
int main(){
    int sum=0;
    int n;
    printf("Enter a range");
    scanf("%d",&n);
 int i =1;
 while(i<=n){
 sum = sum + i;
 i++;
 }
printf("The Sum of no's is %d",sum);
 return 0;
}