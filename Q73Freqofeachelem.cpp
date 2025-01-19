#include<iostream>
using namespace std;
int main(){
int arr[100];
int n;
cout<<"enter n";
cin>>n;
cout<<"enter elements of array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
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
    cout<<"Element "<<arr[i]<<"occur"<<countArr[i]<<"Times"<<endl;;
}
return 0;
}