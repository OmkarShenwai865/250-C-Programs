#include<stdio.h>
int SecondLargest(int arr[],int n){
int Largest=-1, SecLargest=-1;
for(int i=0;i<n;i++){
if(arr[i]>Largest){
Largest = arr[i];
}
}
for(int i=0;i<n;i++){
    if(arr[i]>SecLargest && arr[i]!=Largest){
        SecLargest=arr[i];
    }
}
return SecLargest;
}
int main(){
    int arr[20];
    int n;
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter elements of arr");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
printf("Second Largest element is: %d",SecondLargest(arr,n));
return 0;
}