
#include <stdio.h>
#include<string.h>
int main() {
char ch[100];
int i,length,flag=1;
printf("Enter a string");
scanf("%s",&ch);
//fgets(ch);
 length= strlen(ch);
 
 for(i=0;i<length/2;i++){
     if(ch[i] != ch[length-i-1]){
         flag=0;
         break;
     }
 }
if(flag==1){
    printf("The string is palindrome");
}
else{
    printf("The String is not palindrome");
}
    return 0;
}