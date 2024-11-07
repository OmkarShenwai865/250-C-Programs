#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int count =0;
   while (n!=0){
    n = n/10;
    count++;
   }
   //if(n==0){
   
   //{
    /* code */
  // }
   
    printf("The counting of digit = %d",count);
    return 0;
}