#include<stdio.h>
int main(){
char ch;
printf("Enter character");
scanf("%c",&ch);
int Ascii = ch;
printf("The Ascii value of character %c is %d",ch,Ascii);
return 0;
}