#include<stdio.h>
#define SIZE 6
int main(){
    int denom[SIZE]= {500,100,50,20,10,1};
    int amount,notes;
    printf("Enter amount");
    scanf("%d",&amount);
    int i=0;
    do{
    notes = amount/denom[i];
    if(notes){
        //remaining amt
        amount = amount%denom[i];
        printf("%d * %d = %d\n",notes,denom[i],notes*denom[i]);
    }
    i++;
    }while(i<SIZE);
    return 0;
}