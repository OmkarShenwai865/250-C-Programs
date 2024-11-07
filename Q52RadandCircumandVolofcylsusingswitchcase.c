#include<stdio.h>
#define PI 3.14
int main(){
    int choice,radius,circumference,volume,height;
    printf("1.Calculate Circumference\n");
    printf("2.Calculate Radius\n");
    printf("3.Calculate Volume\n");
    printf("Choose an option(1,2,3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter radius");
        scanf("%d",&radius);
        circumference = 2 * PI * radius;
        printf("Circumference=%d",circumference);
        break;

        case 2: 
        printf("Enter Circumference");
        scanf("%d",&circumference);
        radius = circumference/(2*PI);
        printf("Radius = %d",radius);
        break;

        case 3:
        printf("Enter radius");
        scanf("%d",&radius);
        printf("Enter height");
        scanf("%d",&height);
        volume = PI * radius * radius * height;
        printf("Volume = %d",volume);
        break;
    }
}