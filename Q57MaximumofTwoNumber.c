#include<stdio.h>
int main(){
int x,y;
printf("Enter two numbers");
scanf("%d %d",&x,&y);
switch(x>y){
case 1:
printf("x is greater than y");
break;

case 0:
printf("y is greater than x");
break;
}
return 0;
}