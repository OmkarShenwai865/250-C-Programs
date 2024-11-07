#include<stdio.h>
int main(){
int n;
printf("Enter a number");
scanf("%d",&n);
switch(n%2==0){
case 1:
printf("The number is even");
break;

case 0:
printf("The number is odd");
break;
}
return 0;
}