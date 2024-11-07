#include<stdio.h>
int main(){
char ch;
printf("Enter a operator(+,-,*,%,/)");
scanf("%c",&ch);
int ans=0;
int num1,num2;
printf("Enter num1 and num2");
scanf("%d %d",&num1,&num2);
switch(ch){
case '+':
ans = num1 + num2;
printf("Addition of %d & %d = %d",num1,num2,ans);
break;

case '-':
ans = num1 - num2;
printf("Substraction of %d & %d = %d",num1,num2,ans);
break;

case '*':
ans = num1 * num2;
printf("Multiplication of %d & %d = %d",num1,num2,ans);
break;

case '%':
ans = num1 % num2;
printf("Modulo division of %d & %d = %d",num1,num2,ans);
break;

case '/':
ans = num1 / num2 ;
printf("Division of %d & %d = %d",num1,num2,ans);
break;
}
return 0;
}