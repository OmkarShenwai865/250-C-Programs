#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x & y");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("The greatest no is %d",x);
    }
    else{
        printf("The Greatest Number is %d",y);
    }
    return 0;
}