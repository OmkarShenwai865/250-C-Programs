#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("Enter size");
    scanf("%d",&n);
 printf("Enter elements of array");
 for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
 int evenCount=0,Oddcount=0;
 for(int i=0;i<n;i++){
     if(arr[i]%2==0){
         evenCount++;
     }
     else{
         Oddcount++;
     }
 }
 printf("Total number of Even Elements are: %d\n",evenCount);
 printf("Total number of Odd Elements are: %d\n",Oddcount);
 return 0;
}