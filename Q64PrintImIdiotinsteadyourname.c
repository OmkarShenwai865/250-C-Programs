#include <stdio.h>
#include<string.h>
int main() {
    char name[20];
    printf("Enter your name");
    scanf("%s",&name);
    strcpy(name,"I AM IDIOT");
    
    printf("%s",name);

    return 0;
}