#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter three sides of traingle");
    scanf("%d %d %d",&s1,&s2,&s3);
    if((s1==s2) && (s2==s3)){
        printf("It is an Equilateral Triangle");
    }
    else if((s1==s2) || (s2==s3) || (s3==s1)){
        printf("It is an Isoceles Triangle");
    }
    else
    printf("It is an Scalene Triangle");
    return 0;
}