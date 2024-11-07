#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character");
    scanf("%c",&ch);
    int ascii=ch;
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122){
        printf("The Character is an Alphabet");
    }
    else{
        printf("The Character is Not an Alphabet");
    }
    return 0;
}