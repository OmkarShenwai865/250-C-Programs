#include<stdio.h>
int main(){
char ch;
printf("Enter a character");
scanf("%c",&ch);
int ascii = ch;
if(ascii>=65 && ascii<=90){
    printf("The character is an Uppercase");
}
else if(ascii>=97 && ascii<=122){
    printf("The character is a Lowercase");
}
else if(ascii>=48 && ascii<=57){
    printf("The character is a digit");
}
else{
    printf("The character is a special character");
}
return 0;
}