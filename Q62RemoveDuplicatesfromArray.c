#include<stdio.h>
int main(){
int n,posn,item;
int arr[20];
printf("Enter the no of element to be inserted");
scanf("%d",&n);
printf("Enter the elements of array");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            for(int k=j;k<n-1;k++){
                arr[k]=arr[k+1];
            }
            n--;
            j--;
        }
    }
}
printf("The Required elements are");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}