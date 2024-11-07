#include <stdio.h>

void printArray(int arr[],int start,int len){
    if(start>=len){
        return;
    }
    printf("%d",arr[start]);
    printArray(arr,start+1,len);
}
int main(){
    int n,i;
    int arr[100];
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements are: ");
    printArray(arr,0,n);
    
    
    
    return 0;
}