#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("The character is Vowel");
    }
    else{
        printf("The Character is Consonant");
    }
    return 0;
}