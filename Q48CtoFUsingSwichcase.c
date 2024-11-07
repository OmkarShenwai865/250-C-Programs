#include<stdio.h>
int main(){
    int cel,fah;
   int choice;
   printf("Temperature Conversion:\n ");
printf("1. Celcius to Fahrenheit\n");
printf("2. Fahrenheit to celcius\n");
printf("Choose an option(1or2)");
scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter Temp in Celcius");
        scanf("%d",&cel);
        fah = (9*cel)/5 + 32;
        printf("Temp=%dC in fah is %dF",cel,fah);
        break;

        case 2:
        printf("Enter Temp in Fahrenheit");
        scanf("%d",&fah);
        cel = (fah - 32)*5/9;
        printf("Temp=%dF in cel is %dC",fah,cel);
        break;
    }
    return 0;
}