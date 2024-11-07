#include <stdio.h>
#include<string.h>
int main() {
char ch[100];
printf("Enter a string");
scanf("%s",&ch);
int i;
for(i=0;ch[i]!='\0';i++){
    ch[i]='*';
}
printf("String after conversion:");
for(i=0;ch[i]!='\0';i++){
   printf("%c",ch[i]);
}
    return 0;
}