#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int remainder;
    int ans=0;
    int NewNum = n;
    while(n!=0){
        remainder=n%10;
        
        ans = ans + (remainder)*(remainder)*(remainder);
        n = n/10;
    }
if(ans==NewNum){
    printf("%d is an Armstrong no",ans);
}
else{
    printf("%d is not an Armstrong no",ans);
}
return 0;
}