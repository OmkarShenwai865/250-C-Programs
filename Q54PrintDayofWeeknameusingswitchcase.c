#include<stdio.h>
int main(){
char weekday[100];
printf("Enter a weekday name");
scanf("%s",&weekday);
switch(weekday){
    case "Monday":
    printf("Day-1");
    break;

    case "Tuesday":
    printf("Day-2");
    break;

    case "Wednesday":
    printf("Day-3");
    break;

    case "Thursday":
    printf("Day-4");
    break;

    case "Friday":
    printf("Day-5");
    break;

    case "Saturday":
    printf("Day-6");
    break;

    case "Sunday":
    printf("Day-7");
    break;
}
return 0;
}