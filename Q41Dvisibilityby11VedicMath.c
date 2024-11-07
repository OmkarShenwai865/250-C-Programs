#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    
int SumOddposn = 0;
int SumEvenposn = 0;
int position =1;
while(n>0){
int digit = n%10;
if(position%2==1){
    SumOddposn = SumOddposn + digit;
}
else{
SumEvenposn = SumEvenposn + digit;
}
n = n/10;
position++;
}
int difference = SumOddposn - SumEvenposn;
if(difference%11==0){
    printf("The Number is divisible by 11");
}
else{
    printf("The number is not divisible by 11");
}
return 0;
}