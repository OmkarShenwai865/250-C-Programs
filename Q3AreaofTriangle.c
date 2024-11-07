#include<stdio.h>
int main(){
    int base,area,height;
    printf("Enter base of traingle");
    scanf("%d",&base);

    printf("Enter height of traingle");
    scanf("%d",&height);

    area = (base*height)/2;
    printf("Area = %d",area);
    return 0;
}