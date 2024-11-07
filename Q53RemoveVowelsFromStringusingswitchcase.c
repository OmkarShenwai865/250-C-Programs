#include<stdio.h>
int main(){
char input[100],output[100];
printf("Enter a string");
scanf("%s",&input);
int i=0,j=0;
for(int i=0;input[i] != '\0';i++){
    switch(input[i]){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        break;

        default:
        output[j++]=input[i];
        break;
    }
}
output[j]='\0'; 
printf("String without vowels: %s\n",output);
return 0;
}