#include<stdio.h>
int main(){
    int note500,note200,note100,note50,note20,note10,note5,note2,note1;
    note500=note200=note100=note50=note20=note10=note5=note2=note1=0;
    int amount;
    printf("Enter a amount");
    scanf("%d",&amount);

    if(amount>=500){
        note500 = amount/500;
        amount = amount - (note500)*500;
    }
        if(amount>=200){
        note200 = amount/200;
        amount = amount - (note200)*200;
    }
        if(amount>=100){
        note100 = amount/100;
        amount = amount - (note100)*100;
    }
    if(amount>=50){
        note50 = amount/50;
        amount = amount - (note50)*50;
    }
    if(amount>=20){
        note20 = amount/20;
        amount = amount - (note20)*20;
    }
    if(amount>=10){
        note10 = amount/10;
        amount = amount - (note10)*10;
    }
    if(amount>=5){
        note5 = amount/5;
        amount = amount - (note5)*5;
    }
    if(amount>=2){
        note2 = amount/2;
        amount = amount - (note2)*2;
    }
    if(amount>=1){
        note1 = amount/1;
        amount = amount - (note1)*1;
    }

printf("Total number of notes: \n");
printf("Rs500=%d, Rs200=%d, Rs100=%d, Rs50=%d, Rs20=%d, Rs10=%d, Rs5=%d, Rs2=%d, Rs1=%d",note500,note200,note100,note50,note20,note10,note5,note2,note1);
return 0;
}