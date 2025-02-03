#include<iostream>
using namespace std;
int main(){
int arr[100],key,n;
int flag=0;
cout<<"Enter n"<<endl;
cin>>n;
cout<<"Enter element of array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter key"<<endl;
cin>>key;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        cout<<"Element found at index:"<<i<<endl;
        flag=1;
        break;
    }
}
if(flag=0){
  cout<<"Element not found"<<endl;
}
return 0;
}