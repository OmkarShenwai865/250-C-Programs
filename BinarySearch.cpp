#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Searched index is:"<<binarysrch(arr,n);
    return 0;
}
int binarysrch(int arr[],int n){
    int s=0,e=n-1;
    int ans=0;
    int mid= s + (e-s)/2;
    while(s<=e){
        for(int i=0;i<n;i++){
        if(arr[i]==arr[mid]){
     ans=mid;
        }
        else if(arr[i]>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
        }
    }
return ans;

}