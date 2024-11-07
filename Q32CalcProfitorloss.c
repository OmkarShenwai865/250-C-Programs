#include<stdio.h>
int main(){
    //sp-> selling price
    //bp-> buying price
    int sp,bp;
    printf("Enter bp and sp");
    scanf("%d %d",&bp,&sp);
    int amt=0;
if(sp > bp){
    amt = sp-bp;
    printf("Profit = %d",amt);
}
else if (bp > sp)
{
    amt = bp - sp;
    printf("Loss = %d",amt);
}
else{
    printf("No Profit No Loss");
}
return 0;
}