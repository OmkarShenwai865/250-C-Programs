#include<stdio.h>
int main(){
int n,posn,item;
int arr[20];
printf("Enter the no of element to be inserted");
scanf("%d",&n);
//printf("Enter element to be deleted");
printf("Enter the position");
scanf("%d",&posn);
printf("Enter the elements of array");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=posn-1;i<n-1;i++){
   arr[i]=arr[i+1];
}
n--;
printf("The Required elements are");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}