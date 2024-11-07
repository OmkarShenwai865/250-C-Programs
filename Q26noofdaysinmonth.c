#include<stdio.h>
int main(){
    int mm,yy;
    printf("Enter a month");
    scanf("%d",&mm);
    
    printf("Enter a year");
    scanf("%d",&yy);

    if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)
    {
        printf("There are 31 days in this month");
    }
    else if(mm==4 || mm==6 || mm==9 || mm==11){
        printf("There are 30 days in this month");
    }
    else if(mm==2 && ((yy%4==0) && (yy%400==0 || yy%100!=0))){
        printf("There are 29 days in this month");
        
    }
    else if(mm==2 && ((yy%4!=0) && (yy%400!=0 || yy%100==0))){
        printf("There are 28 days in this month");
    }
else
printf("Invalid Input");
return 0;
}