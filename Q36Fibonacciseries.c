#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a=0,b=1;
    int NewNum;
    NewNum = a + b;
  printf("%d %d ",a,b);
    int i =3;
    while(i<=n){
NewNum = a + b;
printf("%d ",NewNum);
a = b;
b= NewNum;
i++;
    }
    return 0;
}