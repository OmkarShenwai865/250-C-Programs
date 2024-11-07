#include<stdio.h>
int main(){
int arr[100],n;
printf("Enter size of array");
scanf("%d",&n);
printf("Enter elements of array");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Printing all negative elements");
for(int i=0;i<n;i++){
if(arr[i]<0){
printf("%d ",arr[i]);
}
}
return 0;
}

