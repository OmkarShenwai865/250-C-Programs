#include<stdio.h>
int main(){
char ch;
printf("Enter a character");
scanf("%c",&ch);
switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("%c is a vowel\n",ch);
break;
default:
if((ch>='b' && ch<='z') || (ch>'B' && ch<'Z')){
printf("%c is a consonant\n",ch);
}
else {
printf("Invalid Input");
}
}
return 0;
}