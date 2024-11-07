#include<stdio.h>
int main(){
int n,posn,item;
int arr[20];
printf("Enter the no of element to be inserted");
scanf("%d",&n);
printf("Enter the element to be inserted");
scanf("%d",&item);
printf("Enter the position");
scanf("%d",&posn);
printf("Enter the elements of array");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
n=n+1;
for(int i=n-1;i>=posn;i--){
    arr[i]=arr[i-1];
}
arr[posn-1]=item;
printf("The Required elements are");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}