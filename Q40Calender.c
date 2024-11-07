#include<stdio.h>
int main(){
    int first;
    printf("Enter first day of the month");
    scanf("%d",&first);
    int noofday;
    printf("Enter no of days in a month");
    scanf("%d",&noofday);
    int i =1;
    while(i<first){
            printf(" ");
        i++;}

    while(i<=noofday){
        printf("%3d",i);
        if((first + i -1)%7==0)
     printf("\n");
        i++;
    }
    return 0;
}