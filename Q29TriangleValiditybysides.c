#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter three sides of triangle");
    scanf("%d %d %d",&s1,&s2,&s3);

    if((s1+s2)>s3 && (s2+s3)>s1 && (s1+s3)>s2)
    {
        printf("Triangle is valid");
    }
    else {
        printf("Triangle is invalid");
    }
    return 0;
}