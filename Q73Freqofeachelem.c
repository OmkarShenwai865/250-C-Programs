#include<stdio.h>
int main(){
int arr[100];
int n;
printf("Enter size");
scanf("%d",&n);
printf("Enter elememts of array");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int countArr[100]={0};
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(arr[i]==arr[j]){
        countArr[i]++;
      }
    }
}
for(int i=0; i<n; i++){
    printf("Element %d occurs %d times\n",arr[i],countArr[i]);
}
return 0;
}