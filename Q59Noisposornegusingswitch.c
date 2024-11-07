#include<stdio.h>
int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
switch(num>0){
    case 1: //'1' means it is true then,
    printf("It is a positive no");
    break;

    case 0: // '0' this means it is false then,
    switch(num<0){
        case 1:
        printf("It is a negative no");
        break;

        case 0:
        printf("Zero number");
        break;
    }
}
return 0;
}