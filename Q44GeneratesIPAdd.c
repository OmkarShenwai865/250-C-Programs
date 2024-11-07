#include<stdio.h>
int main(){
    unsigned char ip[4]; //can hold values ranging from 0 to 255
    printf("Enter first three octets(eg. 192 168 10)");
    scanf("%hhu %hhu %hhu",&ip[0],&ip[1],&ip[2]);

    printf("Generating IP Addresses\n");
    for(ip[3]=0;ip[3]<256;ip[3]++){
        printf("%d.%d.%d.%d\n",ip[0],ip[1],ip[2],ip[3]);
        if(ip[3]==255){
            break;
        }
    }
    return 0;
}