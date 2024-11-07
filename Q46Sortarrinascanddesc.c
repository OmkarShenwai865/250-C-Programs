#include<stdio.h>
int main(){
    int size,i,j;
    float temp;
 printf("Enter size of array");
 scanf("%d",&size);
    float arr[size];
    printf("Enter elements of array");
    for(i=0;i<size;i++){
        scanf("%f",&arr[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   printf("Sorted array in ascending order is:\n ");
   for(i=0;i<size;i++){
    printf("%f\t",arr[i]);
   }
   printf("\n");

   for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     printf("Sorted array in descending order is:\n ");
   for(i=0;i<size;i++){
    printf("%f\t",arr[i]);
   }
   return 0;
}